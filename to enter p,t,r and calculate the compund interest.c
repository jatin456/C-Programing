#include<stdio.h>
#include<math.h>
int main ()
{
	float r,t,p;
	float CI;
	printf("Enter the rate:");
	scanf("%f",&r);
	printf("Enter the time:");
	scanf("%f",&t);
	printf("Enter the princle amount:");
	scanf("%f",&p);
	 CI = p*(pow((1 + r/ 100),t));
printf("compound interest is %f",CI);
	 

	
	return 0;
	
}
