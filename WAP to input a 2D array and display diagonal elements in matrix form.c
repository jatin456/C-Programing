#include<stdio.h>
int main()
{
	int i,j,sum,m,n;
	printf("Enter the number of row:");
	scanf("%d",&m);
	printf("Enter the number of column:");
	scanf("%d",&n);
	int x[m][n];
	if(m!=n)
{
		printf("\n");
	printf("Sorry!we can not print the diagonal elements\nbecause the number of row and column are not same");
}
	else
	{
	printf("Enter the elements:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Elements in [%d],[%d]=",i,j);
			scanf("%d",&x[i][j]);
		}
	}
	printf("-----------------------------\n");
	printf("The matrix is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",x[i][j]);
		}
		printf("\n");
	}
	printf("-------------------------\n");
	printf("The diagonal elements in matrix are:\n\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			printf("%d\t",x[i][j]);
			else
			printf("\t");
			
		}
		printf("\n");
	}
}

	
	return 0;
}
