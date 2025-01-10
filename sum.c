#include<stdio.h>
int main ()
{
    int i,j,k,n;
    L1 : printf("enter two numbers\n");
    scanf("%d %d",&i,&j);

    k=j+i;
    printf("sum of i&j is = %d\n",k);
    printf("do you coede\n");
    printf("if yas enter 1 if no enter 2\n");
    scanf("%d",&n);
    if(n==1)
    {
        goto L1;
    }
    return 0;
}