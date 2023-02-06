// Example: Taking notion return notion fuction

#include<stdio.h>

void greet(void); // Function declaration
int main(void) {

  for(int i = 0; i < 10; i++)
    greet();
  
  
  return 0;
}

void greet(void) {
  printf("Hi there, How ae you?\n");
}

