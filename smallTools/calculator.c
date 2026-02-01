#include <stdio.h>

int main() {
  char operator;
  printf("Enter the operator(-,+,/,*):");
  scanf("%c", &operator);
  getchar();
  int a, b;
  printf("Enter a:");
  scanf("%d", &a);

  printf("Enter the value of b:");
  scanf("%d", &b);

  if (operator == '+') {
    printf("Addition Output:%d\n", a + b);
  } else if (operator == '-') {
    printf("Substraction Output:%d\n", a - b);
  } else if (operator == '/') {
    printf("Division Output:%d\n", a / b);
  } else if (operator == '*') {
    printf("Multiplication Output:%d\n", a * b);
  } else {
    printf("Invalid input Enter the valid value \n");
  }
  return 0;
}
