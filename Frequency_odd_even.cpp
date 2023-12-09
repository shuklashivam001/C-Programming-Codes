#include<stdio.h>
int main(){
	int r,c,even=0,odd=0;
	printf("Enter the number of rows : ");
	scanf("%d",&r);
	printf("Enter the number of columns : ");
	scanf("%d",&c);
	int m[r][c];
	for (int i=0; i<r; i++){
		for (int j=0; j<c; j++){
			printf("Enter the %d x %d element of a matrix : ",i,j);
			scanf("%d",&m[i][j]);
			if (m[i][j]%2==0){
				even++;
			}
			else {
				odd++;
			}
		}
	}
	for (int i=0; i<r; i++){
		for (int j=0; j<c; j++){
			printf("%d ",m[i][j]);
		}
		printf("\n");
	}
	printf("The number of odd elements is %d",odd);
	printf("\nThe number of even elements is %d",even);
	return 0;
}
