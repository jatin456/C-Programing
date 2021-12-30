#include<stdio.h>
# define MAX 50
int main()
{
	int a[MAX][MAX],b[MAX][MAX],product[MAX][MAX];
	int i,j,k,arows,acolumns,brows,bcolumns,sum=0;
	printf("Enter the row and  column for matrix a:");
	scanf("%d %d",&arows,&acolumns);
	printf("Enter the elements for matrix a: \n");
	for(i=0;i<arows;i++)
	{
		for(j=0;j<acolumns;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the numbers of row and column for matrix b:");
	scanf("%d %d",&brows,&bcolumns);
	if(brows != acolumns)
	{
		printf("Sorry we cannot multiply matrix a and b they are of different order \n");
	}
	else
	{		printf("Enter the elements of matrix b \n");
			for(i=0;i<arows;i++)
		{
		    for(j=0;j<acolumns;j++)
		  {
			scanf("%d",&b[i][j]);
		  }
		}
	}
	printf("---------------------------------------\n\n");
	for(i=0;i<arows;i++)
	{
		for(j=0;j<bcolumns;j++)
		{
			for(k=0;k<brows;k++)
			{
				sum+=a[i][k]*a[k][j];
			}
			product[i][j]=sum;
			sum=0;
			
		}			

	}
	printf("Resultant martix: \n");
	for(i=0;i<arows;i++)
	{
		for(j=0;j<bcolumns;j++)
		{
			printf("%d\t",product[i][j]);
		}
		printf("\n");
	}
		
return 0;
}
