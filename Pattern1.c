#include<stdio.h>
int main()
{
    int num;
    int i,j;
    printf("Enter the number=");
    scanf("%d",&num);

    for(i=65;i<=num;i++)
    {
        for(j=65;j<=i;j++)
        {
            printf("%c",j);
            
        }
        ++j;
        printf("\n");
    }
}