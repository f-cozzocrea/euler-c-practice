#include <stdio.h>
#include <math.h>

int sum_multiples(int multiple1, int multiple2, int max);

int main(void) {
  int total_sum = 0;

  total_sum = sum_multiples(3, 5, 1000);
  printf("total_sum: %i \n", total_sum);

  return 0;
}


int sum_multiples(int multiple1, int multiple2, int max) {
  if (multiple1 >= max && multiple2 > max) {
    return 0;
  }
  int sum = 0;
  int accumulator = 0;
  while (accumulator < max) {
    accumulator += multiple1;
    sum += accumulator;
  }
  sum -= accumulator;

  accumulator = 0;
  while (accumulator < max) {
    accumulator += multiple2;
    // Check to make sure we aren't double counting
    if (accumulator % multiple1 != 0) {
      sum += accumulator;
    }
  }
  sum -= accumulator;

  return sum;
}

