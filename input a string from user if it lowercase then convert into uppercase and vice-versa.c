#include<stdio.h>
int main()
{
	char x[100];
	int i;
	printf("Input string:\n");
	gets(x);
	for(i=0;x[i]!=0;i++)
	{
		if(x[i]>='A'&& x[i]<='Z')
		x[i]=x[i]+32;
		else if(x[i]>='a'&&x[i]<='z')
		x[i]=x[i]-32;
		}	
		printf("------------------------------\n");
		printf("The resultant string:\n\n");
		puts(x);
	return 0;
}
