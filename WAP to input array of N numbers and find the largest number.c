#include<stdio.h>
int main()
{ int n,largestnumber;
printf("Enter the size of array:");
scanf("%d",&n);
int x[n],i;
for(i=0;i<n;i++)
{
scanf("%d",&x[i]);
}
largestnumber=x[0];
for(i=0;i<n;i++)
{
	if(x[i]>largestnumber)
	largestnumber=x[i];
}
printf("Largest number  among all the element is equal to = %d",largestnumber);
	
	
	
	
	
	return 0;
}
