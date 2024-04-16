#include<stdio.h>
int main()
{
    int num,fact=0;
    printf("Enter the number=");
    scanf("%d",&num);
    for(int i=0;i<=num;i++)
    {
        fact=fact*i;

    }
    printf("Factorial=%d",fact);
}