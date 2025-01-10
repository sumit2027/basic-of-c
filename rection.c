#include<stdio.h>
struct student1
{
   char name[10];
   char address[15];
   char collage[10];
   int roll;
   char section[3];
   char course[5];

};

struct student2
{
   char name[10];
   char address[15];
   char collage[10];
   int roll;
   char section[3];
   char course[5];

};

int main()
{
    struct student1 a;
    printf("This is First Student Information\n");
    printf("Enter your name\n");
    scanf("%s",a.name);
    printf("Enter student address\n");
    scanf("%s",a.address);
    printf("Enter student collage name\n");
    scanf("%s",a.collage);
    printf("Enter student roll no\n");
    scanf("%d",&a.roll);
    printf("Enter student section\n");
    scanf("%s",a.section);
    printf("Enter student course\n");
    scanf("%s",a.course);

    printf("This is First Student Information\n");
    printf("Student Name is         = %s\n",a.name);
    printf("Student Address is      = %s\n",a.address);
    printf("Student Collage name is = %s\n",a.collage);
    printf("Student Roll no is      = %d\n",a.roll);
    printf("Student Section is      = %s\n",a.section);
    printf("Student Course is       = %s\n",a.course);

    struct student2 b;
    
    printf("This is Second Student Information\n");
    printf("Enter your name\n");
    scanf("%s",b.name);
    printf("Enter student address\n");
    scanf("%s",b.address);
    printf("Enter student collage name\n");
    scanf("%s",b.collage);
    printf("Enter student roll no\n");
    scanf("%d",&b.roll);
    printf("Enter student section\n");
    scanf("%s",b.section);
    printf("Enter student course\n");
    scanf("%s",b.course);

        
    printf("This is Second Student Information\n");
    printf("Student Name is         = %s\n",b.name);
    printf("Student Address is      = %s\n",b.address);
    printf("Student Collage name is = %s\n",b.collage);
    printf("Student Roll no is      = %d\n",b.roll);
    printf("Student Section is      = %s\n",b.section);
    printf("Student Course is       = %s\n",b.course);

    return 0;
}
