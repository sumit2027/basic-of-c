#include<stdio.h>
int main()
{
    int x,sum = 0;
    printf("Enter three number\n");
    scanf("%d",&x);
    sum = x%10;
    x = x/10;
    sum = (x%10) + sum;
    x = x/10;
    sum = x + sum;
    printf("Sum of three digit is = %d",sum);
    return 0;
}