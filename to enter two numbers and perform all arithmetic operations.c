#include<stdio.h>
int main()
{int num1,num2;
int sum,sub,multi,mod;
float div;
printf("enter two numbers:");
scanf("%d%d",&num1,&num2);
sum=num1+num2;
sub=num1-num2;
multi=num1*num2;
div=(float)num1/num2;
mod=num1%num2;
printf("sum=%d\n",sum);
printf("sub=%d\n",sub);
printf("multiplication=%d\n",multi);
printf("quotient=%f\n",div);
printf("modulus=%d\n",mod);

return 0;	
}
