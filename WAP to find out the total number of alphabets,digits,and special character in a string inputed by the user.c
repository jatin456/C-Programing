#include<stdio.h>
int main()
{
	char x[100];
	int i,count,count1,count2;
	count=count1=count2=i=0;
	printf("Input the string:\n");
	gets(x);
	while(x[i]!='\0')
	{
		if((x[i]>='a'&& x[i]<'z')||(x[i]>='A'&& x[i]<'Z'))
		{
		 count++;
		}
		else if(x[i]>='0'&&x[i]<='9')
		{
		 count1++;
		}
		else
		{
		 count2++;
		}
		i++;
	}
	printf("----------------------------------\n\n");
	printf("Total numbers of alphabets=%d\nTotal numbers of digits=%d\nTotal numbers of special character=%d",count,count1,count2);	
	return 0;
}
