#include<stdio.h>
int main()
{
    char String[100];
    int i;

   L1: printf("Enter a char of A to Z\n");
    scanf("%s",&String);

   // printf("ACCII value of charter in this program\n");
    for(i=0;String[i]!='\0';i++)
    {
        printf("Your char this = %c\nACCII value is = %d\n",String[i],String[i]);
        
    }

    printf("DO your went to code\n");
    printf("if yas enter 1 if not enter 2\n");
    scanf("%d",&i);
    if(i==1)

    {
        goto L1;
    }

    return 0;
}
