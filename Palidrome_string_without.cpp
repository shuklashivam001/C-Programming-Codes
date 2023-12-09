#include<stdio.h>
int main(){
	char a[50];
	printf("Enter a word to check is it palidrome : ");
	gets(a);
	int len=0 , i=0 , flag=0;
	while (a[i] != '\0'){
		len++;
		i++;
	}
	for (int j=0; a[j] != '\0'; j++){
		if (a[j] != a[len-j-1]){
			flag++;
			break;
		}
	}
	if (flag == 0)
		printf("String is palidrome.");
	else 
		printf("String is not palidrome.");
}
