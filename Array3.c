#include<stdio.h>
int main()
{
    int marks[10],i,n,sum;
    double avg;

    printf("Enter the number of Elemnets=");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter number %d=",i+1);
        scanf("%d",&marks[i]);

        sum +=marks[i];

    }
    avg = (double)sum/n;
    printf("average =%lf",avg);
}