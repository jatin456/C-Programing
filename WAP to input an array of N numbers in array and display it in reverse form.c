#include<stdio.h>
int main()
{ int size;
printf("Enter the size of array:");
scanf("%d",&size);
int x[size],i;
for(i=0;i<size;i++)
{
scanf("%d",&x[i]);
}
printf("The reverse order of numbers are:\n");
for(i=size-1;i>=0;i--)
{printf("%d\t",x[i]);
}
	
	
	
	
	return 0;
}
