#include<stdio.h>
int main()
{
    int num1 ,num2 ;
    double value;
    printf("Enter the number1 =");
    scanf("%d",&num1);
    printf("Enter the number2 =");
    scanf("%d",&num2);

    printf("Select the Operation=\n");

    printf("PRESS 1 for Addition + \n");
    printf("PRESS 2 for Substraction - \n");
    printf("PRESS 3 for Multiplication *  \n");
    printf("PRESS 4 for Division \n");

    char op;
    scanf("%c",&op);

    switch (op)
    {
    case '+':
        
        printf("%d + %d =%d",num1,num2,num1+num2);
        printf("value =%d",value);
        break;

    case '-':
        printf("%d - %d =%d",num1,num2,num1-num2);
        break;

    case '*':
        printf("%d * %d =%d",num1,num2,num1*num2);
        break;

    case '/':
        printf("%d / %d =%d",num1,num2,num1/num2);
        break;

    
    default:
        printf("Invalid !!!! error !!");
        break;
    }



}