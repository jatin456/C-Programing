#include<stdio.h>
void QUAD(void)
{
	int a,b,c,discriminant;
	printf("Enter the coefficient of x^2:\n");
	scanf("%d",&a);
	printf("Enter the coefficient of x:\n");
	scanf("%d",&b);
	printf("Enter the constant:\n");
	scanf("%d",&c);
	discriminant=(b*b)-4*a*c;
	printf("\nDiscriminat=%d\n\n",discriminant);
	if(discriminant>=0)
	printf("Roots are real\n");
	if(discriminant<0)
	printf("Roots are imaginary");
}
int main()
{
	QUAD();
	
	return 0;
	
}
	
	
	
	
	
	
	
	

