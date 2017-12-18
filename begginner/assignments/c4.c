#include<stdio.h>
int main(void)
{
	char character;
	printf("enter the character:\n");
	scanf("%c",&character);
	if((character>='a'&& character<='z') || (character>='A'&&character<='Z'))
	{
		printf("given character is alphabet");
	}
	else
	{
		printf("given character is not an alphabet");
	}
	return 0;
}
