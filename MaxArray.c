#include<stdio.h>
int main()
{
    int a[5],i,j;
   
    for(i=0;i<=4;i++)
    {
        scanf("%d\n",&a[i]);
        printf("%d",a[i]);
        printf("\t");
       
    }
    int min=a[0];
    for(i=1;i<=4;i++)
    {
        if(a[i]<min)
        {
            min =a[i];

        }
        
    }
    printf("minimum value =%d",min);

}