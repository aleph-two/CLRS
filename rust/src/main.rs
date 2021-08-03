use sorting::insertion_sort;
use sorting::merge_sort;

mod helper;
mod sorting;

fn main() {
  let size = 100_000;
  let mut a = helper::random_vector(size);

  print!("insertion sort:  ");
  helper::benchmark(insertion_sort::sort, &mut a, size);

  print!("merge sort:      ");
  helper::benchmark(merge_sort::sort, &mut a, size);
}
