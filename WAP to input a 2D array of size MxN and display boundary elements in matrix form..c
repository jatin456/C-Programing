#include<stdio.h>
int main()
{
	int m,n;
	printf("Enter the number of row:");
	scanf("%d",&m);
	printf("Enter the number of column:");
	scanf("%d",&n);
	int x[m][n],i,j;
	printf("Enter the elements:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&x[i][j]);
		}
	}
	
	printf("-----------------------------------\nThe inputed matrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",x[i][j]);
		}
		printf("\n");
	}
	printf("-------------------------------------\n");
	printf("The border elements of the matrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==0|j==0|i==m-1|j==n-1)
			printf("%d\t",x[i][j]);
			else
			printf("\t");
		}
		printf("\n");
	}
return 0;
}
