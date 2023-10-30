#include<stdio.h>
void main()
{
    int limit,num,count,big;
    printf("enter the limit\n");
    scanf("%d",&limit);
    printf("enter %d number\n",limit);
    for(count=1;count<=limit;count++)
    {
        scanf("%d",&num);
        if(num>big||count==1)
        {
            big=num;
        }
    }
    printf("biggest number is %d\n",big);
}