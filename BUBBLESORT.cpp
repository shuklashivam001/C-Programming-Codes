#include<stdio.h>
int main()
{
	int n,i,j,t,a[5];
	n=sizeof(a)/sizeof(a[0]);
	printf("Enter the %d elements\n",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if (a[j]>a[j+1]){
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;}
		}
	}
	printf("After bubble sort\n");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
