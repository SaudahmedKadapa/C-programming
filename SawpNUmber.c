#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the number =\n ");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("Value before the swap: \n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    int com=0;
    com=a;
    a=b;
    b=com;

    printf("value after the swap: \n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);

    return 0;

}