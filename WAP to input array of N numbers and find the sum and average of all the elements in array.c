#include<stdio.h>
int main()
{ int size,sum=0,average;
printf("Enter the size of array:");
scanf("%d",&size);
int x[size],i;
for(i=0;i<size;i++)
{
	scanf("%d",&x[i]);
}
	for(i=0;i<size;i++)
	{
		sum=sum+x[i];
	}
	

	average=sum/size;

printf("The sum of elements =%d\nThe average of all the elements=%d",sum,average);	
	
	return 0;
}
