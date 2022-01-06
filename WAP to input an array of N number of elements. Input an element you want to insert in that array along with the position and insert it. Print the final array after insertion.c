#include<stdio.h>
int main()
{
	int n,a,pos;
	printf("Enter the size of array:");
	scanf("%d",&n);
	int x[n],i;
	printf("Input elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	printf("\nEnter the element you want to insert:\n");
	scanf("%d",&a);
	printf("Enter the position at which you want to insert:\n");
	scanf("%d",&pos);
	if(pos>n)
	{
		printf("Sorry! We can't insert Invalid position\n");
	}
	else
	{
	
	for(i=n-1;i>=pos-1;i--)
	{
		x[i+1]=x[i];
	}
	x[pos-1]=a;
	printf("\nThe final Array after insertion:\n\n");
	for(i=0;i<=n;i++)
	{
		printf("%d\t",x[i]);
	}}	
	return 0;
}
