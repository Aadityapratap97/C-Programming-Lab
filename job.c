#include<stdio.h>
void main()
{
    int age;
    printf("enter the age");
    scanf("%d",&age);
    if(age>19 & age<=50)
    if(age>18 & age<=25)
    {
        printf("eligible for grade 1 job");
    }
    else
    {
        printf("eligible for grade 2 job");
    }
    else
    {
        printf("you are not eligible for job");
    }
}