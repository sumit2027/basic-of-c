#include <stdio.h>

int main() {
    // int d = 15; // Day (1-31)
    // int m = 5;  // Month (1-12)
    // int y = 2013; // Year (e.g., 2013)
    int day,month,year;
    // l1:printf("Enter your day\n");
    // scanf("%d",&day);

    // printf("Enter your Month\n");
    // scanf("%d",&month);

    // printf("Enter your year\n");
    // scanf("%d",&year);

    l1:printf("Enter your day-month-year\n");
    scanf("%d-%d-%d",&day,&month,&year);


    // Calculate the weekday using the expression
    int weekday = (day += month < 3 ? year-- : year - 2, 23 * month / 9 + day + 4 + year / 4 - year / 100 + year / 400) % 7;

    // Map the index to the corresponding day
    const char* days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    printf("Given date: %02d-%02d-%04d\n", day, month, year);
    printf("Day of the week: %s\n", days[weekday]);

    int i;
    printf("\n\nDo you went to code\n");
    printf("if yas enter 1 if no enter 2\n");
    scanf("%d",&i);
    if(i == 1)
    {
        goto l1;
    }

    return 0;
}
