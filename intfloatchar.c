#include<stdio.h>
int main()
{
    printf("size of int     %lu bytes\n",sizeof(int));
    printf("size of float   %lu bytes\n",sizeof(float));
    printf("size of char    %lu bytes\n",sizeof(char));
    printf("size of double  %lu bytes\n",sizeof(double));

    printf("addres of int   %p bytes\n",sizeof(int));
    printf("addres of float %p bytes\n",sizeof(float));

    return 0;


}