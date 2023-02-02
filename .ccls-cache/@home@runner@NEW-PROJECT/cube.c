#include<stdio.h>


int main(void) {

  int n = 1;
  printf("Enter a number: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    printf("Number is: %d and the cube of %d is: %d\n", i, i, i*i*i);
  }

  return 0;
}