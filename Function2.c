#include<stdio.h>

int number(int a,int b);
int main()
{
    int num1,num2;
    printf("Enter the number=");
    scanf("%d%d",&num1,&num2);
    int result = number(num1,num2);
    printf("%d",result);  
}
int number(int a, int b)
{
    return a+b;

}