#include<stdio.h>

int main()
{
    int a,b,c,d,i;
    int max;
    int arr[4]={a,b,c,d};
    printf("****Enter the four number=\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
     max =arr[0];
    for( i=0;i<=4;i++)
    {
        
        if(max<arr[i])
        {
            max=arr[i];
        }
        printf("\n");
        
    }

    printf("greatest number =%d",i);

    return 0;



}