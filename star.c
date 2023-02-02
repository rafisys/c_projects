#include<stdio.h>
int main()
{
  // int j,i;
  // for(j=1;j<=5;j++)
  //   {
  //     for(i=1;i<=5;i++)
  //     {
  //       if(j<=i)
  //         printf("*");
  //       else
  //         printf(" ");
  //       }
  //      printf("\n");
  //   }

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j <= i; j++) {
      printf("*");
    }
    printf("\n");
  }
 
}