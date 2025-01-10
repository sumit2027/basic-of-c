#include<stdio.h>
int main()
{
    float a,b;
    char op;

    printf("Chose your opreter(+,-,*,/,)\n");
    scanf("%c",&op);
    printf("Enter two numbers\n");
    scanf("%f %f",&a,&b);

    switch(op)
    {
        case '+':
        printf("%2.1f + %2.1f = %2.1f",a,b,a+b);
        break;

         case '-':
        printf("%2.1f - %2.1f = %2.1f",a,b,a-b);
        break;

         case '*':
        printf("%2.1f * %2.1f = %2.1f",a,b,a*b);
        break;

         case '/':
        printf("%2.1f / %2.1f = %2.1f",a,b,a/b);
        break;


    default:
    printf("ERROR! Oprator is not correct");

    }


}