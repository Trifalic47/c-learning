#include <stdio.h>

int add(int x, int y);
int substract(int x, int y);
int multiply(int x, int y);
int divide(int x, int y);

int main() {
  // Making functions like add substract multiply and divide
  char operator;
  int x;
  int y;

  printf("Enter the operator(+,-,*,/):");
  scanf("%c", &operator);

  printf("Enter x:");
  scanf("%d", &x);

  printf("Enter y:");
  scanf("%d", &y);

  if (operator == '+') {
    printf("%d\n", add(x, y));
  } else if (operator == '-') {
    printf("%d\n", substract(x, y));
  } else if (operator == '*') {
    printf("%d\n", multiply(x, y));
  } else if (operator == '/') {
    printf("%d\n", divide(x, y));
  } else {
    printf("Invalid input");
  }

  return 0;
}

int add(int x, int y) { return x + y; }

int substract(int x, int y) { return x - y; }

int multiply(int x, int y) { return x * y; }

int divide(int x, int y) {
  if (x == 0 || y == 0) {
    return 0;
  }
  return x / y;
}
