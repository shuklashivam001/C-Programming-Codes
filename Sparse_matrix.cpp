#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,sumdiagonal=0;
	printf("Enter size rows and columns : ");
	scanf("%d%d",&a,&b);
	int c[a][b];
	for(int i=0;i<a;i++)
	{for(int j=0;j<b;j++)
	{printf("Enter the element of array of c[%d][%d] : ",i,j);
	scanf("%d",&c[i][j]);
	}
	}
	printf("First matrix\n");
	for(int i=0;i<a;i++)
	{for(int j=0;j<b;j++)
	{printf(" %d ",c[i][j]);
	}
	printf("\n");
	}
	int count=0;
	for(int i=0;i<a;i++)
	{for(int j=0;j<b;j++)
	{if(c[i][j]==0)
	{count++;
	}
	}
	}
	int sparse=(a*b)/2;
	if (count>sparse)
	{
		printf("Given matrix is sparse matrix");
	}
	else
	{
		printf("Given matrix is not sparse matrix\n");
	}
	return 0;
}
