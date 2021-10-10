#include<stdio.h>
#include<math.h>
int main()
{

float radi,dia,circumference,area;
float pi=3.1459;
printf("enter the radius of circle:");
scanf("%f",&radi);
dia=2*radi;
printf("diameter=%funits\n",dia);
circumference=2*pi*radi;
printf("circumference=%funits\n",circumference);
area=(pi*radi*radi);
printf("area of circle=%fsq.units",area);
return 0;
	
}
