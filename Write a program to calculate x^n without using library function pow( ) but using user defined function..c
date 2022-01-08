#include<stdio.h>
void power(void)
{
	int num,power1,product=1;
	printf("Enter the number:\n");
	scanf("%d",&num);
	printf("Enter the power:\n");
	scanf("%d",&power1);
	int i;
	for(i=1;i<=power1;i++)
	{
		product*=num;
	}
	printf("%d",product);
}
int main()
{
	power();

	return 0;
}
