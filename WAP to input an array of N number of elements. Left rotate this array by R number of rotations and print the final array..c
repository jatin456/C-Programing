#include<stdio.h>
int main()
{
	int size,i,j,k,temp;
	printf("Enter the size of array:");
	scanf("%d",&size);
	int x[size];
	for(i=0;i<size;i++)
	{
		scanf("%d",&x[i]);
	}
	printf("Enter the number of rotation you want to do:");
	scanf("%d",&k);
	for(j=1;j<=k;j++)
	{	temp=x[0];
		for(i=0;i<size-1;i++)
		{
			x[i]=x[i+1];
		}
			x[i]=temp;
	}
	
	for(i=0;i<size;i++)
	{
		printf("%d\t",x[i]);
	}
	return 0;
}
