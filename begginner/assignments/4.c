#include <stdio.h>
int count=0,i;
int main(void) {
{	int count=0;
	{
		count++;
		printf("local:%d\n",count);
	}
	
	{
		int count=0;
	count++;
	printf("block:%d\n",count);	
	}
}	


{
count++;
printf("global:%d\n",count);
}
return 0;
}

