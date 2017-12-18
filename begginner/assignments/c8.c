#include<stdio.h>
int main(void)
{
	int n,i,sum=0;
	printf("enter the value of n:\n");
	scanf("%d",&n);

for(i=0;i<=n;i++)
	{
		sum=sum+i;
		
	}
	printf("%d",sum);
	return 0;
}
