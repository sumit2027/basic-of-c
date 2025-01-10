#include<stdio.h>
int main()
{
    int x=5;
    int *p=&x;

    char a='b';
    char *q=&a;

    printf("value of x is = %d\n address of x is = %p\n  ",x,&x);
    printf("value of x = *p == %d\n address of x = p == %p\n  ",*p,p);

    printf("value of a is = %c\n address of a is  %p\n  ",a,&a);
    printf("vlaue of a =*q == %c\n addres of a =q== %p\n  ",*q,q);

    return 0;    
}