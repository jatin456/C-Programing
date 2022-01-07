#include<stdio.h>
void table(void)
{
	int a,i;
	printf("Enter a number:\n");
	scanf("%d",&a);
	printf("Table of %d is:\n",a);
	for(i=1;i<=10;i++)
	{
		printf("%dx%d=%d\n",a,i,a*i);
	}
}
int main()
{
	table();
	
	return 0;
}
