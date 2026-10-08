#include <stdio.h>

int main() {

  while (1) {
    int guess;
    printf("Enter a number between 1 and 10: ");
    scanf("%d", &guess);
    if (guess >= 1 && guess <= 10) {
      printf("The number is within the range.\n");
    } else {
      printf("The number is not within the range.\n");
    }
    return 0;
  }
}