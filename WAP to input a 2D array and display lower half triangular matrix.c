#include<stdio.h>
int main()
{
	int m,n;
	printf("Enter the number of row:");
	scanf("%d",&m);
	printf("Enter the number of column:");
	scanf("%d",&n);
	int x[m][n],i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&x[i][j]);
		}
	}
	printf("The matrix you inputed:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",x[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("--------------------\n");
	printf("The upper half matrix:\n");
	for(i=0;i<m;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		{
			if(i>=j)
			printf("%d\t",x[i][j]);
		}
		printf("\n");
	}
		return 0;
}
