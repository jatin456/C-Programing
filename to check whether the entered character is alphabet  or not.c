#include<stdio.h>
int main()
{char ch;
printf("Enter the character:");
scanf("%c",&ch);
if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
{printf("It is alphabet");
}
	else{printf("It is not alphabet");
	}
	
	return 0;
	
}
