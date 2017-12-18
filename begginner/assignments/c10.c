#include<stdio.h>
int main(void)
{
	int number,n,count=0;
	printf("enter the number:\n");
	scanf("%d",&number);
	while(number>0)
	{
		number=number/10;
		count++;
		
	}
	printf("%d",count);
	return 0;
}
