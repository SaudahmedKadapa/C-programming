#include<stdio.h>

int main()
{
    // int arr[5]={10,20,30,40,50};
    // arr[3]=100;
    // printf("Elemnts in Array =");
    // for(int i=0;i<5;i++)
    // {
    //     printf("%d ",arr[i]);
    // }
    // return 0;

    char arr[6]={'A','D','F','k','\0'};
    int i=0;
    while(arr[i])
    {
        printf("%c",arr[i++]);
    }
    return 0;

    
    

}