#include<stdio.h>
int main(void)
{
	int no;
	printf("enter the number:\n");
	scanf("%d",&no);
	if(no%2==0)
	{
		printf("given number is even");
	}
	else
	{
		printf("given number is odd");
	}
	return 0;
}
