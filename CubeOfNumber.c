#include<stdio.h>
int main()
{
    float n, cube;
    printf("Enter a number that you want to cube : ");
    scanf("%f",&n);
    cube = n * n * n;
    printf("The cube of a number is %.2f",cube);
    return 0;
}