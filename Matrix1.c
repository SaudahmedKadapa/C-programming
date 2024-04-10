#include<stdio.h>

int main()
{
    int row,col;
    int i,j;
    int arr1[row][col];
    int arr2[row][col];
    printf("Number of rows=");
    scanf("%d",&row);
    printf("Number of Col=");
    scanf("%d",&col);


    printf("Enter the matrix Arr1=\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
        printf("\n");
      
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",arr1[i][j]);
           
            
        }
      
    }
}