#include<stdio.h>
int main()
{
	int size,i,j,r,temp;
	printf("Enter the size of array:");
	scanf("%d",&size);
	int x[size];
	for(i=0;i<size;i++)
	{
		scanf("%d",&x[i]);
	}
	printf("Enter the number of rotation you want to do:");
	scanf("%d",&r);
	for(j=1;j<=r;j++)
	{	temp=x[0];
		for(i=0;i<size-1;i++)
		{
			x[i]=x[i+1];
		}
			x[i]=temp;
	}
	
	printf("The array after left rotation by %d times:\n\n",r);
	for(i=0;i<size;i++)
	{
		printf("%d\t",x[i]);
	}
	return 0;
}
