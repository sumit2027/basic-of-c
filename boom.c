#include<stdio.h>
int main()
{
    char op;
    float a,b;

    printf("Chose any opreter (*,/,+,-,)\n");
    scanf("%c",&op);

    printf("Enter two numbers \n");
    scanf("%f %f",&a,&b);
    
    switch(op)
    {
        case '+':
        printf("%.2f + %.2f = %.2f",a,b,a+b);
        break;

        case '*':
        printf("%.2f * %.2f = %.2f",a,b,a*b);
        break;

        case '/':
        printf("%.2f / %.2f = %.2f",a,b,a/b);
        break;

        default:
        printf("This not avilval in this you chose\n");
        printf("Only this (*,/,+,-\n)");
    }

    return 0;
}