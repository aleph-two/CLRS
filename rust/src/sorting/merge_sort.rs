use std::i32;

pub fn sort(a: &mut Vec<i32>, size: usize) {
  return merge_sort(a, 0, size - 1);
}

fn merge_sort(a: &mut Vec<i32>, p: usize, r: usize) {
  if p < r {
    let q = (p + r) / 2;
    merge_sort(a, p, q);
    merge_sort(a, q + 1, r);
    return merge(a, p, q, r);
  }
}

fn merge(a: &mut Vec<i32>, p: usize, q: usize, r: usize) {
  let n1 = q - p + 1;
  let n2 = r - q;

  let mut left = vec![0; n1 + 1];
  for i in 0..n1 {
    left[i] = a[p + i as usize]
  }
  left[n1] = i32::MAX;

  let mut right = vec![0; n2 + 1];
  for j in 0..n2 {
    right[j] = a[q + j + 1 as usize]
  }
  right[n2] = i32::MAX;

  let mut i = 0;
  let mut j = 0;
  for k in p..=r {
    if left[i] <= right[j] {
      a[k] = left[i];
      i += 1
    } else {
      a[k] = right[j];
      j += 1
    }
  }
}
