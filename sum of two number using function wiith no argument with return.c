#include<stdio.h>
int sum()
{
	int x,y,z;
	printf("Enter the values which you want to add:\n");
	scanf("%d %d",&x,&y);
	z=x+y;
	return z;
}
int main()
{
	int sum1;
	sum1=sum();
	printf("sum=%d",sum1);
	return 0;
}
	
	


