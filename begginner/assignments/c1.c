#include<stdio.h>
int main(void)
{
	int no;
	printf("enter the number:");
	scanf("%d",&no);
	if(no>0)
	{
		printf("given number is positive");
	}
	else if(no<0)
	{
		printf("given number is negative");
		
	}
	else 
	{
		printf("given number is equal to zero");
	}
	return 0;
}
