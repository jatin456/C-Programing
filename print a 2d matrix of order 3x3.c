#include<stdio.h>
int main()
{ 
	int arr1[3][3],i,j;
	printf("\n\nRead a 2d array of 3x3 and print the matrix:\n");
	printf("------------------------------------------------\n\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
	{
			printf("Elements in [%d],[%d]  :",i,j);
			scanf("%d",&arr1[i][j]);}
	}
				printf("\n");
				printf("\nThe matrix is:\n\n");
				for(i=0;i<3;i++)
	{ 
					printf("\n");
					for(j=0;j<3;j++)
	{
		
			printf("%d\t",arr1[i][j]);
		
}	}
printf("\n\n");
	return 0;
}
