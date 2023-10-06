#include<stdio.h>
void main()
{
    int l,b;
    printf("enter the value of length of rectangle");
    scanf("%d",&l);
    printf("enter the value of breadth of rectangle");
    scanf("%d",&b);
    int side;
    printf("\nenter the value of size of square");
    scanf("%d",&side);
    float radius;
    printf("\nenter the value of radius of circle");
    scanf("%f",&radius);
    printf("\nperimeter of circle %f",2*3.14*radius);
    printf("\narea of circle %f",radius*radius*3.14);
    printf("\nperimeter of square %d",4*side);
    printf("\narea of square %d",side*side);
    printf("\nperimeter of rectangle %d",2*(l+b));
    printf("\narea of rectangle %d",l*b);
}