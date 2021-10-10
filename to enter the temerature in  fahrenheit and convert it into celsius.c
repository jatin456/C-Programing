#include<stdio.h>
int main()
{float celsius,fahrenheit;
printf("enter the temperatue in fahrenheit:");
scanf("%f",&fahrenheit);
celsius=((fahrenheit-32)*5/9);
printf("temperature in celsius=%f",celsius);
return 0;
}
