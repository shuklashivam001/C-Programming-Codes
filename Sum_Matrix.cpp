#include<stdio.h>
int main(){
	int r,c,sum=0;
	printf("Enter the number of rows : ");
	scanf("%d",&r);
	printf("Enter the number of columns : ");
	scanf("%d",&c);
	int m[r][c];
	for (int i=0; i<r; i++){
		for (int j=0; j<c; j++){
			printf("Enter the %d x %d element of a matrix : ",i,j);
			scanf("%d",&m[i][j]);
			sum+=m[i][j];
		}
	}
	for (int i=0; i<r; i++){
		for (int j=0; j<c; j++){
			printf("%d",m[i][j]);
		}
		printf("\n");
	}
	printf("The sum of all the elements of matrix is %d",sum);
	return 0;
}
