#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the three no");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        printf("The greatest no is=%d",a);
        else
        printf("The greatest no is=%d",c);
    }
    else
    {
        if(b>c)
        printf("The greatest no is=%d",b);
        else
        printf("The greatest no is=%d",c);
    }
}