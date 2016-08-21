#include <stdio.h>

/**
 * Your mission (if you so choose):
 * Write a program that prints out the numbers 1 to 100 (inclusive).
 * If the number is divisible by 3, print Crackle instead of the number.
 * If the number is divisible by 5, print Pop.
 * If the number is divisible by both 3 and 5, print CracklePop.
 */
int main(void)
{
  int num;

  for (num = 1; num <= 100; num++) {
    if (num % 3 == 0 && num % 5 == 0) { /* OR: if (num % 15 == 0) */
      printf("CracklePop\n");
    } else if (num % 3 == 0) {
      printf("Crackle\n");
    } else if (num % 5 == 0) {
      printf("Pop\n");
    } else { /* num is not divisible by 3 or 5, print digit */
      printf("%d\n", num);
    }
  }
  return (0);
}
