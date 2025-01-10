#include<stdio.h>
int main ()
{
    int i,j,k;
   L1: printf("enter a number of table \n");
    scanf("%d",&k);
    for(i=1;i<10;i++)
    {
        printf("%d * %d = %d",k,i,k*i);
        printf("\n");

    }
    printf("do you went to code\n");
    printf("if yas enter 1 if no enter 2\n");
    scanf("%d",&j);
    {
        goto L1;
    }
    return 0;

}