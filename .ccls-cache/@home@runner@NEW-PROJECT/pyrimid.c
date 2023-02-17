#include<stdio.h>

int main()
{
  int i,j;
  for(i=2;i<=5;i++)
    {
      for(j=1;j<=9;j++)
        {
          if(j>=6-i && j<=i+4)
           printf("*");
          else
           printf("\n"); 
        }
      printf("\n");
    }
}