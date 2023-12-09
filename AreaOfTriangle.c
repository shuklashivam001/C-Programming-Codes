#include<stdio.h>
int main()
{
    int h, b;
    float area;
    printf("Enter height of triangle : ");
    scanf("%d",&h);
    printf("Enter base of triangle : ");
    scanf("%d",&b);
    area = (h * b)/2.0;
     printf("The area of triangle is %.2f",area);
     return 0;
}