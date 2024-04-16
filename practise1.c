#include<stdio.h>
int main()
{
  
  int num1 ,i;
  int fact=1;
  
  printf("Enter the number=");
  scanf("%d",&num1);

  for(i=1;i<=num1;i++)
  {
    printf("%d\n",i);
    fact = fact * i;

  }
  printf("%d",fact);
  

  
  


    
}