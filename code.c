#include<stdio.h>

int main()
{
  int i,j,n;
  printf("Enter number ");
  scanf("%d",&n);
  for(i=1;i<=2*n-1;i++)
    {
      
      for(j=1;j<=2*n-1;j++)
        {
          if(j<=i)
          printf("*");
        }
      printf("\n");
    }
  return 0;
}