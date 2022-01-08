#include<stdio.h>
void factorial(void)
{
	int num,fact=1,i;
	printf("Enter number:\n");
	scanf("%d",&num);
	for(i=num;i>1;i--)
	{
		fact=fact*i;
		
	}
	printf("The factorial of %d is %d",num,fact);
}
int main()
{
	factorial();
	
	return 0;
 
}
