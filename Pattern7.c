#include<stdio.h>

int main()
{
    int num;
    int i,j;
    printf("Enter the number =");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);

        }
        printf("\n");
    }


}