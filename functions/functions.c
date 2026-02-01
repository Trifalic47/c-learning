#include <stdio.h>

void welcome();

int main() {
  // Functions in C programming
  for (int i = 1; i <= 5; i++) {
    printf("%d.", i);
    welcome();
  }
  return 0;
}

void welcome() {
  // Printing Welcome!
  printf("Welcome!\n");
}
