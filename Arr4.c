#include<stdio.h>
int main()
{
    int n,i;
    int arr[n];
    printf("enter the size =\n");
    scanf("%d\n",&n);
    for( i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for( i=1;i<=n;i++)
    {
        printf("%d\t",arr[i]); 
    }
   
}