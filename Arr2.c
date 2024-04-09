#include<stdio.h>
int main()
{
    int n;
    int values[n];
    printf("Enter the array size =");
    scanf("%d",&n);
    printf("Enter the %d integers=\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&values[i]);
    }
    printf("Display the value =");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",values[i]);
    }
    
    
}
