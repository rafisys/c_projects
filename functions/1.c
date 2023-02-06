// Example: Taking something return notion fuction

#include<stdio.h>

void add(int, int); // Function declaration
int main(void) {
  int a=0, b=0;
  printf("Enter two numbers: ");
  scanf("%d%d",&a,&b);

  add(a,b); // Function call
  
  
  return 0;
}

void add(int x, int y) { // Function definition
  printf("Sum of %d and %d is %d\n", x, y, x+y);
}