#include<stdio.h>
int main()
{
    float pi, radius, area;
    printf("Enter radius of circle : ");
    scanf("%f",&radius);
    pi = 3.14;
    area = pi * radius * radius;
    printf("The area of circle is %.2f",area);
    return 0;
}