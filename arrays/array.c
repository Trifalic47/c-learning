#include <stdio.h>

int main() {
  int numbers[] = {23, 435, 33, 5653, 234};
  int length = sizeof(numbers) / sizeof(numbers[0]);
  for (int i = 0; i < length; i++) {
    printf("%d\n", numbers[i]);
  }

  return 0;
}
