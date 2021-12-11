#include<stdio.h>
int main()
{ int size,positive_count=0,negative_count=0,zero_count=0;
printf("Enter the size of array:");
scanf("%d",&size);
int x[size],i;
for(i=0;i<size;i++)
{
	scanf("%d",&x[i]);
}
	for(i=0;i<size;i++)
	
	{ 
	if(x[i]>0)
	positive_count++;
	if(x[i]<0)
    negative_count++;
     if(x[i]==0)
    zero_count++;	}	
		
	
	printf("positive count=%d\n",positive_count);
	printf("negative count=%d\n",negative_count);
	printf("zero count=%d",zero_count);
	
	
	
	
	return 0;
}
