#include<stdio.h>
void totalbill(void)
{
	float charge;
	printf("Enter the meal charge:\n");
	scanf("%f",&charge);
	charge -=(0.10*charge);
	printf("Charge after discount is %f\n",charge);
	charge +=(0.20*charge);
	printf("Charge after adding 20 percent tax is %f\n",charge);
	charge +=(0.15*charge);
	printf("Charge after adding 15 percent  tip is %f\n",charge);
	printf("Total bill:\n");
	printf("%f",charge);
}
int  main()
{
	totalbill();
	
	return 0;
}
