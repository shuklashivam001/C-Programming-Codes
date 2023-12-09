#include<stdio.h>
#include<math.h>
int main(){
	int P, R, T;
	float CI;
	printf("Enter Principal : ");
	scanf("%d",&P);
	printf("Enter Rate : ");
	scanf("%d",&R);
	printf("Enter Time : ");
	scanf("%d",&T);
	CI = P * (pow(1+R/T,T)) - P;
	printf("Compound Interest is %.2f ",CI);
	return 0;
}
