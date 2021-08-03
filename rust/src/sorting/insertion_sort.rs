pub fn sort(a: &mut Vec<i32>, size: usize) {
  for j in 1..size {
    let key = a[j];
    // insert a[j] into the sorted sequence A[0 .. j - 1]
    let mut i = (j - 1) as i32;
    while i >= 0 && a[i as usize] > key {
      a[(i + 1) as usize] = a[i as usize];
      i -= 1
    }
    a[(i + 1) as usize] = key
  }
}
