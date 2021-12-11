#include<stdio.h>
int main( )
{
int size,max,min;
printf("Enter the size of array:");
scanf("%d",&size);
int x[size],i;
for(i=0;i<size;i++)
{
scanf("%d",&x[i]);}
max=x[0];
for(i=0;i<size;i++)
{ 
 if(max<x[i])
 max=x[i];
}
min=x[0];
for(i=0;i<size;i++)
{ 
 if(min>x[i])
 min=x[i];
}
printf("maximum value =%d\nminumum value =%d",max,min);

return 0;}
