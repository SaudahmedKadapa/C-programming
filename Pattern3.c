#include<stdio.h>

int main()
{
    int num,i,j;
    printf("Enter the number =");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        for(j=5;i<j;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}