#include<stdio.h>
int main()
{
	int n,pos;
	printf("Enter the size of array:");
	scanf("%d",&n);
	int x[n],i;
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	printf("\nThe array you inputed:\n\n");
	for(i=0;i<n;i++)
	{
		printf("%d",x[i]);
	}
	printf("\nEnter the position which you want to delete:");
	scanf("%d",&pos);
	if(pos>=n+1)
	{
		printf("\nSorry!we can't do deletion Invalid position\n");
	}

	else
	{
	printf("\nDeleted element=%d\n",x[pos-1]);
	printf("---------------------------------\n\n");
	for(i=pos-1;i<n-1;i++)
	{
		x[i]=x[i+1];
	}
	
	printf("Resultant array:\n");
	{
		for(i=0;i<n-1;i++)
		{
			printf("%d\n",x[i]);
		}
	}
	}
	return 0;
}
