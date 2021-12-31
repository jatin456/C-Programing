#include<stdio.h>
int main()
{
	int size,temp,maxpos=0,minpos=0,max,min;
	printf("Enter the size of array:");
	scanf("%d",&size);
	int x[size],i;
	printf("Enter the elements:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&x[i]);
	}
	 max=x[0];
	 min=x[0];
	for(i=0;i<size;i++)
	{
		if(x[i]>max)
		{
			max=x[i];
			maxpos=i;
		}
		if(x[i]<min)
		{
			min=x[i];
			minpos=i;
		}
	}

	temp=x[maxpos];
	x[maxpos]=x[minpos];
	x[minpos]=temp;
	printf("\n\nThe updated Array is:\n\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",x[i]);
	}
	return 0;
}
