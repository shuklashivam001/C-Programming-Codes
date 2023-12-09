#include <stdio.h>
int main() {
	char ser,alg;
	printf("Enter serial of counting (forward as F and backward as B) : ");
	scanf("%c",&ser);
	if (ser=='F' || ser=='B'){
		int sp,ep,jp;
		printf("Enter starting point of counting : ");
		scanf("%d",&sp);
		printf("Enter ending point of counting : ");
		scanf("%d",&ep);
		printf("Enter jumping value for the counting : ");
		scanf("%d",&jp);
		printf("Enter alignment for the numbers (vertical as V and horizontal as H) : ");
		scanf(" %c",&alg);
		printf("Counting numbers are given as  : \n");
		if (ser=='F'){
			for (int i=sp; i<=ep; i=i+jp){
				if (alg=='H'){
					printf("%d ",i);
				}
				else if (alg=='V') {
					printf("%d\n",i);
				}
				else {
					printf("Invalid Alignment Input!!");
				}
			}
		}
		else if (ser=='B'){
			for (int i=sp; i>=ep; i=i-jp){
				if (alg=='H'){
					printf("%d ",i);
				}
				else if (alg=='V') {
					printf("%d\n",i);
				}
				else {
					printf("Invalid Alignment Input!!");
				}
			}
		}
	}
	else {
		printf("Invalid Serial Input!!");
	}
	return 0;
}
