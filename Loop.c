#include<stdio.h>
int main()
{
  int a,b,c;
  printf("Enter a Number ");
  scanf("%d%d%d",&a,&b,&c);
  if(a>b)
  {
   if (a>c){
     printf("A is greatest");
   }
    else 
     printf("c is greatest");
  }
  else{
    if(b>c){
      printf("B is Greatest" );
      
    }
    else
    {
      printf("C is greatest");
    }
  }
}