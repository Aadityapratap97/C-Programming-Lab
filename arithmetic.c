#include<stdio.h>
void main()
{
    int a,b,sum,sub,div,multi;
    printf("enter the first number");
    scanf("%d",&a);
    printf("enter the second number");
    scanf("%d",&b);
    sum=a+b;
    sub=a-b;
    div=a/b;
    multi=a*b;
    printf("\nthe sum is %d",sum);
    printf("\nthe sub is %d",sub);
    printf("\nthe div is %d",div);
    printf("\nthe multi is %d",multi);
}