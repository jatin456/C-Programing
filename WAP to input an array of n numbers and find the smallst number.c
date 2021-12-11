#include<stdio.h>
int main()
{ int n,smallestnumber;
printf("Enter the size of array:");
scanf("%d",&n);
int x[n],i;
for(i=0;i<n;i++)
{
scanf("%d",&x[i]);
}
smallestnumber=x[0];
for(i=0;i<n;i++)
{
	if(x[i]<smallestnumber)
	smallestnumber=x[i];
}
printf("Smallest number  among all the element is equal to = %d",smallestnumber);
	
	
	
	
	
	return 0;
}
