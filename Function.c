#include<stdio.h>
int sum(int x,int y);
int main()
{
    int a,b;
    printf("ENter the number =");
    scanf("%d%d",&a,&b);
    int result =sum(a,b);
    printf("result =%d",result);


}
int sum(int x,int y)
{
    return x+y;

}