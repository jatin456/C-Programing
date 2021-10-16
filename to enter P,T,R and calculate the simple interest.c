#include<stdio.h>
int main ()
{
	float r,t,p;
	float SimpleInterest;
	printf("Enter the rate:");
	scanf("%f",&r);
	printf("Enter the time:");
	scanf("%f",&t);
	printf("Enter the princle amount:");
	scanf("%f",&p);
	
	SimpleInterest=(p*r*t)/100;
	printf("simple interest=%f",SimpleInterest);	
	
	
	
	
	return 0;
	
}
