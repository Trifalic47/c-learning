#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  // Generating random numbers in C
  srand(time(NULL));
  int randomNumber = (rand() % 10) + 1;
  printf("%d\n", randomNumber);

  return 0;
}
