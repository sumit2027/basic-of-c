#include<stdio.h>
int main()
{
    int totaldays,month,remeaningdyas;
    printf("Enter any numbers\n");
    scanf("%d",&totaldays);
    
    month=totaldays/30;
    remeaningdyas=totaldays%30;

    printf("\n%d days is equival ot \n%d month and \n%d days",totaldays,month,remeaningdyas);
    return 0;

}