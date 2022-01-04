#include<stdio.h>
int main()
{
	int i,count=0;
	char x[100];
	printf("Input the character: ");
	gets(x);
	printf("The character you input: \n");
	printf("%s\n",x);
	for(i=0;x[i]!=0;i++)
	{
		count++;
	}
	printf("The length of word is: \n");
	printf("%d",count);
	return 0;
}
