#include<stdio.h>
#include<math.h>
int main(){
	int n, count=0, sum=0, r;
	printf("Enter a number to check is it armstrong : ");
	scanf("%d",&n);
	int org=n, temp=n;
	while (temp>0){
		temp = temp/10;
		count++;
	}
	while (n>0){
		r=n%10;
		sum=sum+pow(r,count);
		n=n/10;
	}
	if (sum==org)
		printf("The number %d is a armstrong.",org);
	else 
		printf("The number %d is not a armstrong.",org);
}
