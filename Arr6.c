#include<stdio.h>
int main()
{
    int n;
    int i;
    printf("Enter the size of Array=");
    scanf("%d",&n);
    int arr1[n],arr2[n],sum[n];

    printf("Enter the Elements of Arr1=\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
        printf("%d\t",arr1[i]);
        
    }

    printf("\n Enter the Elements of Arr2=");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr2[i]);
         printf("%d\t",arr2[i]);
        
    }
    printf("\n The sume of two array =");

    for(i=0;i<n;i++)
    {
        sum[i]=arr1[i]*arr2[i];
        printf("%d\t",sum[i]);
    }
    
}