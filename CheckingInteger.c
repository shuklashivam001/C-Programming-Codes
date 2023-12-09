#include<stdio.h>
int main()
{
    int n;
    printf("Enter an integer that you want to check : ");
    scanf("%d",&n);
    if (n<0)
    {
        printf("%d is a negative integer",n);
    }
    else if (n==0)
    {
        printf("%d is neither positive nor negative integer",n); 
    }
    else
    {
        printf("%d is a positive integer",n);
    }
    return 0;
}