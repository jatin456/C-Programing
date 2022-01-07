#include<stdio.h>
void swap(int a,int b)
{
	int c;
	c=a;
	a=b;
	b=c;
	printf("\nValue after swaping:\n\n");
	printf("%d %d",a,b);
}
int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	swap(x,y);
	return 0;
}
