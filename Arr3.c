#include<stdio.h>
int main()
{
    int num,n;
    int sum=0;
    float avg;
    printf("Enter the total subject number=");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        printf("Enter the marks %d=",i);
        scanf("%d",&num);

        sum +=num;
        

    }
    
    avg = (double)sum/n;
    printf("avg =%lf",avg);



}