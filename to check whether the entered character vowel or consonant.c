#include<stdio.h>
int main()
{char ch;
int lowercase_vowel,uppercase_vowel;
printf("Enter the character:");
scanf("%c",&ch);
lowercase_vowel=(ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u');
uppercase_vowel=(ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U');
if(lowercase_vowel||uppercase_vowel)
{
printf("%c is vowel",ch);
}
else{
printf("%c is consonant",ch);
}
return 0;
	}
