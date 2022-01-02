#include<stdio.h>
int main()
{
	int m,n,i,j,found=0;
	printf("Enter the number of rows:\n");
	scanf("%d",&m);
	printf("Enter the number of columns:\n");
	scanf("%d",&n);
	int x[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Elements [%d],[%d]=",i,j);
			scanf("%d",&x[i][j]);
		}
	}
	printf("-------------------------------------------\n\n");
	printf("The matrix you inputed:\n\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",x[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<m;i++)
	{	
		for(j=0;j<n;j++)
		{
			if( i==j&&x[i][j]!=1)
			{
			found=1;
			break;
		}
			else if(i!=j&&x[i][j]!=0)
			found=1;
			break;	
		}
	}
	printf("\n");
	if(found==0)
	printf("Matrix is identity matrix");
	if(found==1)
	printf("Matrix is not identity matrix");
	
	
	
	
	
	
	
	
	return 0;
}
