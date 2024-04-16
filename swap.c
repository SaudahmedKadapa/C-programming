#include<stdio.h>
int  main()
{
    int num1=12 ,num2=17;
    int cb=0;
    cb=num1;
    num1=num2;
    num2=cb;
   
    
    printf("%d\n%d\n",num1,num2);
}