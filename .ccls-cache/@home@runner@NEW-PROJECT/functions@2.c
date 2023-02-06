// Example: Taking something return something fuction

#include<stdio.h>

int add(int, int); // Function declaration
int main(void) {
  int a=0, b=0;
  printf("Enter two numbers: ");
  scanf("%d%d",&a,&b);

  int c = add(a,b); // Function call

  printf("Sum of %d and %d is %d\n", a, b, c);
  
  
  return 0;
}

// x, y are arguments
int add(int x, int y) { // Function definition
  return x+y;
}