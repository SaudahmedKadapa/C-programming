#include<stdio.h>
int main()
{
    int n;
    int arr[n];
    int i;
    float sum=0;
    float avg;
    
    printf("Enter the size of array=\n");
    scanf("%d",&n);

    printf("Enter the elements=\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    

    avg = sum/n;

    printf("Sum=%d",sum);
    printf("Avg =%f",avg);

    return 0;



    
    


} 