#include <stdio.h>

int main() {

  int num[4];
  for (int i = 0; i < 5; i++) {
    int number;
    printf("Enter num %d:", i + 1);
    scanf("%d", &number);
    num[i] = number;
  }
  printf("\n");

  for (int j = 0; j < 5; j++) {
    int number = num[j];
    printf("Square root of %d=%d\n", number, number * number);
  }

  return 0;
}
