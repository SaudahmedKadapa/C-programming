#include<stdio.h>

int sub(int x,int y);

int main()
{
    int num1,num2;
    printf("Enter the number =");
    scanf("%d%d",&num1,&num2);
    int result=sub(num1,num2);
    printf("%d",result);

}
int sub(int  x,int y)
{
    return x-y;
}