 #include<stdio.h>
 int main ()
 {
    char operator;
    float a,b,m;

   L1: printf("chose any operators (+,-,*,/,)\n");
    scanf("%c",&operator);

    printf("enter two numbers\n");
    scanf("%1f %1f",&a,&b);

    switch(operator)
    {
        case '+':
        printf("%.2f+%.2f+%.2f",a,b,a+b);
        break;

        case '-':
        printf("%.2f-%.2f=%.2f",a,b,a-b);
        break;
        
        case '*':
        printf("%.2f*%.2f=%.2f",a,b,a*b);
        break;

        case '/':
        printf("%.2f/%.2f=%.2f",a,b,a/b);
        break;

        case '%':
        printf("%.2f",a*100/b);
        break;

        default:
        printf("Invilid opreater\n");
        printf("do you went to code \n");
        printf("if yas enter 1 if no enter 2\n");
        scanf("%d",&m);
        
        if(m==1)
        {
            goto L1;
        }

    }
    return 0;
 }