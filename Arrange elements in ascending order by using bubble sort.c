#include<stdio.h>
int main()
{
int size,i,j,temp;
printf("Enter the size of array:");
scanf("%d",&size);
int x[size];
printf("Enter the elements:\n\n");
for(i=0;i<size;i++)
{
	scanf("%d",&x[i]);
}
for(i=0;i<size;i++)
{
	for(j=0;j<size-i-1;j++)
	{
		if(x[j]>x[j+1])
		{
			temp=x[j];
			x[j]=x[j+1];
			x[j+1]=temp;
		}
	}
	
}
printf("The sorted array in ascending order is:\n\n");
for(i=0;i<size;i++)
{
	
	printf("%d\t",x[i]);
}
return 0;
}
