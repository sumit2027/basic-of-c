#include<stdio.h>
int main ()
{
    char opreator;
    float a,b;

    printf("Chose any opreator\n");
    printf("+,-,*,/\n");
    scanf("%c",&opreator);

    printf("enter two numbers\n");
    scanf("%1f %1f",&a,&b);

    swithc(opreator)
    {
        case'+':
        printf("%0.2f+%0.2f=%0.2f",a,b,a+b);
        break;

        case'-':
        printf("%0.2f-%0.2f=%0.2f",a,b,a-b);
        break;

        case'*':
        printf("%0.2f*%0.2f=%0.2f",a,b,a*b);
        break;

        case'/':
        printf("%0.2f/%0.2f=%0.2f",a,b,a/b);
        break;

        default:
        printf("Invilid opreater\n");

    }

    return 0;

}