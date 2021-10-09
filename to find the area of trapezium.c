#include<stdio.h>

int main(){

    float b1,b2,h;
    float area;

    printf("Enter the size of two bases and height of the trapezium : ");
    scanf("%f%f%f",&b1,&b2,&h);

    area = 0.5 * ( b1 + b2 ) * h ;

    printf("Area of trapezium is: %.3f",area);

    return 0;
}
