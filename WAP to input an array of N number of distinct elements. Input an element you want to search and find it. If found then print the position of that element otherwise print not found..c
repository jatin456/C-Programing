#include<stdio.h>
int main()
{
	int n,a,pos,found;
	printf("Enter the no. of element you want to enter:\n");
	scanf("%d",&n);
	int x[n],i;
	printf("Enter the elements:\n\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	
	printf("The array\n\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",x[i]);
	}
	printf("\n\nEnter the element which you want search in array:");
	scanf("%d",&a);
	for(i=0;i<n;i++)
	{
		if(a==x[i])
		{
			found=1;
			break;
		}
	}
	if(found==1)
	{
		printf("\n%d is present at position %d",a,i+1);
	}
	else
	{
		printf("No. is not present");
	}
	
	
	
	
	
	return 0;
}
