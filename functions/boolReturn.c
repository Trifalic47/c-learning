#include <stdbool.h>
#include <stdio.h>

bool ageCheck(int age);

int main() {
  int age;
  printf("Enter your age here:");
  scanf("%d", &age);

  if (ageCheck(age)) {
    printf("Your are an adult\n");
  } else {
    printf("You are an child\n");
  }

  return 0;
}

bool ageCheck(int age) {
  // Return true if the age is >= 18
  return age >= 18;
}
