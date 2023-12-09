#include<stdio.h>
int main(){
	int a,b;
	printf("Enter 1st number : ");
	scanf("%d",&a);
	printf("Enter 2nd number : ");
	scanf("%d",&b);
	int *p=&a, *q=&b;
	printf("The sum of two numbers using pointers is %d",*p+*q);
	return 0;
}
