#include<stdio.h>
int sumit();
// int ai;
// int ma;
// int am;
int main ()
{
    printf("Welcome to all you may profiles\n");
    printf("thanks\n");
    sumit();
    // ai;
    // ma;
    // am;
    return 0;
}
int sumit ()
{
    int i,a,j;
   L1:  printf("enter table numbers\n");
    scanf("%d",&a);

    for(i=1;i<10;i++)
    {
        printf("%d * %d = %d",a,i,a*i);
        printf("\n");
    }
    printf("Do you went to code\n");
    printf("if yas enter 1\n");
    printf("if no enter 2\n");
    scanf("%d",&j);
    if(j==1)
    {
        goto L1;
    }
}