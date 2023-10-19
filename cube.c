#include<stdio.h>
void main()
{
    int i,n;
    printf("enter the number we want to find the cube of:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("the cube =%d\n",i*i*i);
    }
}