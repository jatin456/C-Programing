#include<stdio.h>
#include<math.h>
int main()
{
	int x,y,result;
	printf("Enter the base:");
	scanf("%d",&x);
	printf("Enter the exponent:");
	scanf("%d",&y);
	result=pow(x,y);
	printf("Answer is %d",result);
	return 0;
}
