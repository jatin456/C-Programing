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
printf("\n The number you entred are:");
for(i=0;i<size;i++)
{printf("%d",x[i]);
}
	
	
	
	
	return 0;
}
