#include<stdio.h>

int main()
{
    int num,i,j;                                                                  
    printf("Enter the numbber =");                                            
    scanf("%d",&num);                                                           
    for(i=5;i>=num;i--) 
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
                                                              
}                                                                                 