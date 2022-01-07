#include<stdio.h>
void swap(void)
{
	int x,y,z;
	printf("Enter numbers:\n\n");
	scanf("%d %d",&x,&y);
	printf("Number before swaping:\n");
	printf("%d %d",x,y);
	z=x;
	x=y;
	y=z;
	printf("\nNumer after swaping:\n");
	printf("%d %d",x,y);
}
int main()
{
	swap();
}
