 #include<stdio.h>
 int main ()
 {
    int a,b;
    printf("enter two number a and b\n");
    scanf("%d %d",&a,&b);

    printf("befor swapin \n");
    printf("a is = %d\n",a);
    printf("b is = %d\n",b);

    a=a^b;
    b=a^b;
    a=a^b;

    printf("after swaping\n\n");
    printf("a is = %d\n",a);

    printf("b is = %d\n",b);

    a=a+b;
    b=a-b;
    a=a-b;

     printf("after swaping\n\n");
     printf("a is = %d\n",a);
     printf("b is = %d\n",b);

    return 0;

 }