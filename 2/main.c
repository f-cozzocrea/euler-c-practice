#include <stdio.h>
#include <math.h>

int sum_fib(int max);

int main(void) {
  int sum;
  int max = 4000000;
  sum = sum_fib(max);
  printf("sum of fib of %i is %i \n", max, sum);
  return 0;
}

int sum_fib(int max) {
  int num1 = 1;
  int num2 = 2;
  int temp;
  int sum = 0;
  printf("%i\n", num1);
  printf("%i\n", num2);

  while (num2 < max) {
    if (num2 % 2 == 0) {
      sum += num2;
    }
    //printf("%i", sum);
    temp = num2;
    num2 = num1 + num2;
    printf("%i\n", num2);
    num1 = temp;
  }
  return sum;
}

