#include<stdio.h>

int main()
{
int i,j,n,k,r;
scanf("%d",&n);
 for(i=1,r=0;i<=2*n-1;i++)
  {
    i<=n?r++:r--;
    k=n;
    for(j=1;j<=2*n-1;j++)
      {
      if(j>r && j<=2*n-r)
      {
        printf("%d",k);

      }        
      else{
        if(j<n){
          printf("%d",k);
          k--;
        }
        else{
          k++;
          printf("%d",k);
        }
      }
        
      }
    printf("\n");
  }
  }  