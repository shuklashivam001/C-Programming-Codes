#include<stdio.h>
void swap(int a,int b){
	a=a-b;
	b=a+b;
	a=b-a;
	printf("After swaping a=%d b=%d",a,b);
}
int main()
{
	swap(23,65);
}
