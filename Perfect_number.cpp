#include<stdio.h>
int main(){
	int n,r,sum=0;
	printf("Enter a number to check is it perfect : ");
	scanf("%d",&n);
	int org=n;
	while(n>0){
		r=n%10;
		for (int i=1; i<r; i++){
			if (r%i==0){
				sum=sum+i;
			}
		}
		n=n/10;
	}
	if (sum==org)
		printf("The number %d is perfect.",org);
	else
		printf("The number %d is not perfect.",org);
}
