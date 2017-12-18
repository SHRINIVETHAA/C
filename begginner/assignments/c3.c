#include<stdio.h>
int main(void)
{
	char character;
	printf("enter the character:\n");
	scanf("%c",&character);
	if(character=='a'||character=='e'||character=='i'||character=='o'||character=='u'||character=='A'||character=='E'||character=='I'||character=='O'||character=='U')
{
	printf("given character is vowel");
}	
else
{
	printf("given character is constant");
	
}
return 0;
}
