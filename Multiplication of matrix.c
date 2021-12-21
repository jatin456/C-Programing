#include<stdio.h>
int main()
{ 
 int x[3][3],y[3][3],z[3][3],product=0;
 int i,j;
 printf("Enter the elements for 1 matrix:\n\n");
 for(i=0;i<3;i++)
 {
 	for(j=0;j<3;j++)
 {
	 	scanf("%d",&x[i][j]);
 	}
 }
 
 printf("The first matrix:\n\n\n");
     
	   
	   for(i=0;i<3;i++)
 {
 	for(j=0;j<3;j++)
 {
 	printf("%d\t",x[i][j]);
	 }
 
       printf("\n");
	   }
  
printf("---------------------------------------\n\n");	
 printf("Enter the element for 2nd matrix:\n\n");
 for(i=0;i<3;i++)
 {
 	for(j=0;j<3;j++)
 {
 
	 	scanf("%d",&y[i][j]);}
	 	
 }
 printf("The second matrix is:\n\n");
 	   for(i=0;i<3;i++)
 {
 	for(j=0;j<3;j++)
 {
 	printf("%d\t",y[i][j]);
	 }
 
       printf("\n");
	   }
  
 printf("---------------------------------------------------\n\n");
 
 printf("The product of matrix 1 and 2 is:\n\n");
 	for(i=0;i<3;i++)
	{ product=0;
		for(j=0;j<3;j++)
	{
			product+=x[i][j]*y[j][i];}
	    printf("%d\t",product);
		}
	

	
	
	
	
	
	
	
	return 0;
}
