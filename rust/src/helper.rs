use num_format::{Locale, ToFormattedString};
use rand::Rng;
use std::time::Instant;

fn randomize(a: &mut Vec<i32>, size: usize) {
  let mut rng = rand::thread_rng();
  for i in 0..size {
    a[i] = rng.gen_range(0..10)
  }
}

pub fn random_vector(size: usize) -> Vec<i32> {
  let mut a = vec![0; size];
  randomize(&mut a, size);
  a
}

fn print_array(a: Vec<i32>, size: usize) {
  for i in 0..size {
    print!("{}", a[i]);
    if i + 1 < size {
      print!(" ")
    } else {
      print!("\n")
    }
  }
}

fn print_matrix(a: Vec<i32>, n: i32, m: i32) {
  for i in 0..n {
    for j in 0..m {
      print!("{}", a[(i * n + j) as usize]);
      if j + 1 < m {
        print!(" ");
      } else {
        print!("\n");
      }
    }
  }
}

pub fn benchmark(f: fn(&mut Vec<i32>, usize), a: &mut Vec<i32>, size: usize) {
  let start = Instant::now();
  f(a, size);
  let time = start.elapsed().as_secs_f64();
  println!(
    "input: {} runtime: {:.6}s",
    size.to_formatted_string(&Locale::en),
    time
  )
}
