#include<stdio.h>
int main(){
	int n1,n2,temp;
	printf("Enter 1st number : ");
	scanf("%d",&n1);
	printf("Enter 2nd number : ");
	scanf("%d",&n2);
	int *p=&n1, *q=&n2;
	printf("The two numbers before swapping are %d and %d.",n1,n2);
	temp = *p;
	*p = *q;
	*q =temp;
	printf("\nThe two numbers after swapping are %d and %d.",*p,*q);
	return 0;
}
