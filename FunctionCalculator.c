#include<stdio.h>

int sum(int x,int y );
int sub(int x,int y);
int multi(int x,int y);
float div (int x,int y);

int main()
{
    int num1,num2;
    printf("enter the number =");
    scanf("%d%d",&num1,&num2);

    int result=sum(num1,num2);
    printf("addition=%d\n",result);

    int result1=sub(num1,num2);
    printf("minus=%d\n",result1);

    int result2=multi(num1,num2);
    printf("multi =%d\n",result2) ; 

    float result3=div(num1,num2);
    printf("div =%f",result3);

}

int sum(int x,int y)
{
    return x+y;
}
int sub(int x,int y )
{
    return x-y;
}
int multi(int x,int y)
{
    return x*y;
}
float div(int x,int y)
{
    return x/y;
}