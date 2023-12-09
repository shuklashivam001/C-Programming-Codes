#include<stdio.h>
int main()
{
    float m1, m2, m3;
    printf("Enter marks of 1st student : ");
    scanf("%f",&m1);
    printf("Enter marks of 2nd student : ");
    scanf("%f",&m2);
    printf("Enter marks of 3rd student : ");
    scanf("%f",&m3);
    if (m1<m2 && m1<m3)
    {
        printf("1st student have lowest marks");
    }
    else if (m2<m1 && m2<m3)
    {
        printf("2nd student have lowest marks");
    }
    else
    {
        printf("3rd student have lowest marks");
    }
    return 0;
}