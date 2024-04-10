#include<stdio.h>

int pattern(int a);

int main()
{
    int num=5;
    
    pattern(num);



}

int pattern(int a)
{
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }


}