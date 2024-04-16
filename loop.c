#include<stdio.h>
int main()
{
    int num;
    int i;
    
   
    printf("Enter the number =");
    scanf("%d",&num);
    for(i=1;i<=20;i++)
    { 
        if(i%2==0){
             printf("%d * %d = %d\n",num,i,num*i);


        }
        
       
       

    }
    
    
}