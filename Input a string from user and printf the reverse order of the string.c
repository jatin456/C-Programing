#include<stdio.h>
int main()
{
	int i,count=0;
	char x[100];
	printf("Input the character: ");
	gets(x);
	printf("The character you input: \n");
	printf("%s\n",x);
	printf("-------------------------------\n");
	for(i=0;x[i]!=0;i++)
	{
		count++;
	}
	printf("The reverse order of character:\n");
	for(i=count-1;x[i]!=0;i--)
	{
		printf("%c",x[i]);	
	}
	return 0;
}
