#include<stdio.h>
int main()
{
	int row,col,sum;
	int x[3][3];
	printf("Enter the elements for matrix:\n");
	for(row=0;row<3;row++)
{   for(col=0;col<3;col++)
     {
				 printf("Elements in [%d],[%d]=",row,col);
				 scanf("%d",&x[row][col]);
	} 
	}
	     printf("\n");
		
	printf("The matrix is:\n");
	printf("\n\n");
	for(row=0;row<3;row++)
	{
		for(col=0;col<3;col++)
	{   
	      printf("%d\t",x[row][col]);
			
			}
	
				printf("\n");
				}
				 
	for(row=0;row<3;row++)
{    for(col=0;col<3;col++)
      if(row+col==2)
      sum+=x[row][col];
			}			
	
	printf("\n\n");
	printf("Sum of antidiagonal=%d",sum);			
					

	
	return 0;
}
