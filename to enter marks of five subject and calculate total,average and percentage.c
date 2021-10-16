#include<stdio.h>
int main()
{
	int total,a,b,c,d,e;
	float percentage,average;
	printf("Enter the marks of five subjects:");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	total=(a+b+c+d+e);
	percentage=((total)*100)/500;
	printf("Total percentage is %f\n",percentage);
	average=total/5.0;
	printf("Average marks =%f\n",average);
	printf("Total marks=%d",total);
	
	


	
	
	
	return 0;
	  
}
