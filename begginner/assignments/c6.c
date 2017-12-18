#include<stdio.h>
int main(void)
{
	int year;
	printf("enter the year:\n");
	scanf("%d",&year);
	if((year%4==0)&&(year%100==0)&&(year%400==0))
	{
		printf("%d is leap year",year);
	}
	else if((year%4==0)&&(year%100!=0))
	{
		printf("%d is not a leap year");
	}
	else
	{
		printf("%d is not a leap year");
	}
	return 0;
}
