#include<stdio.h>
int main ()
{
    char ch;
    int a;

    l1:printf("Enter one (a to z(A to Z))only one charter\n");
    scanf("%c",&ch);

    int value = ch;
    printf("The ASCII value of %c is = %d\n\n",ch, value);
    return 0;
}