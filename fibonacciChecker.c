// Cristian McGee COT3100C Discrete Fibonnaci Assignment
#include <stdio.h>

int fibonacci(int n) {
  if (n == 0) {
    return 0;
  } else if (n == 1) {
    return 1;
  } else {
    return (fibonacci(n - 1) + fibonacci(n - 2));
  }
}

void print5(int n) {
  printf("\n\nDividing by 5:\n\n");
  for (int i = 0; i <= n; i++) {
    printf("Fibonacci number %d is %d, when dividing by 5 it has a quotient of "
           "%d and a remainder of %d\n",
           i + 1, fibonacci(i), fibonacci(i) / 5, fibonacci(i) % 5);
  }
  printf("\n\nOnly the fibonacci numbers that are divisible by 5:\n\n");
  for (int i = 0; i <= n; i++) {
    if (fibonacci(i) % 5 == 0) {
      printf("Fibonacci number %d is %d\n", i + 1, fibonacci(i));
    }
  }
}

void print7(int n) {
  printf("\n\nDividing by 7:\n\n");
  for (int i = 0; i <= n; i++) {
    printf("Fibonacci number %d is %d, when dividing by 7 it has a quotient of "
           "%d and a remainder of %d\n",
           i + 1, fibonacci(i), fibonacci(i) / 7, fibonacci(i) % 7);
  }
  printf("\n\nOnly the fibonacci numbers that are divisible by 7:\n\n");
  for (int i = 0; i <= n; i++) {
    if (fibonacci(i) % 7 == 0) {
      printf("Fibonacci number %d is %d\n", i + 1, fibonacci(i));
    }
  }
}

void print11(int n) {
  printf("\n\nDividing by 11:\n\n");
  for (int i = 0; i <= n; i++) {
    printf("Fibonacci number %d is %d, when dividing by 11 it has a quotient "
           "of %d and a remainder of %d\n",
           i + 1, fibonacci(i), fibonacci(i) / 11, fibonacci(i) % 11);
  }
  printf("\n\nOnly the fibonacci numbers that are divisible by 11:\n\n");
  for (int i = 1; i <= n; i++) {
    if (fibonacci(i) % 11 == 0) {
      printf("Fibonacci number %d is %d\n", i + 1, fibonacci(i));
    }
  }
}

int main(void) {
  print5(35);
  print7(35);
  print11(35);

  return 0;
}
