#include<stdio.h>
#include<math.h>
int main()
	{
	
	float angle1,angle2,angle3,thirdangle;
	printf("Enter the first angle of triangle:");
	scanf("%f",&angle1);
	printf("Enter the second angle of triangle:");
	scanf("%f",&angle2);
thirdangle=180-(angle1+angle2);
	printf("The third angle of triangle is %f",thirdangle);
	
	
	
	
	
	return 0;
	
}

