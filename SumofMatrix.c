#include<stdio.h>
int main()
{
    int matrix1[10][10];
    int matrix2[10][10];
    int sum[10][10];
    int i,j;
    int rows;
    int cols;

    printf("Enter the number of rows= ");
    scanf("%d",&rows);
    printf("Enter the number of cols=");
    scanf("%d",&cols);
    printf("Enter the Elements of Matrix1= \n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d",&matrix1[i][j]);
           
        }
        

    }

     printf("Enter the Elements of Matrix2= \n");
     for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d",&matrix2[i][j]);
            
        }
        

    }
    printf("the Addition of two Matrix=\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            sum[i][j]=matrix1[i][j]+matrix2[i][j];
            printf("%d\t",sum[i][j]);
        
        }
        printf("\n");
    }




}