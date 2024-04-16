#include<stdio.h>
int main()
{
    int i,j;
    int a[5];
    printf("Enter the number =\n");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<=4;i++)
    {
        a[i]=a[i]*a[i];
    }
    printf("Dislay element =\n");
    for(i=0;i<=4;i++)
    {
        printf("%d\n",a[i]);
    }
    
}


