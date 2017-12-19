#include<stdio.h>
int main(void)
{
	int a,b,add,sub,mul,divi,mod;
	printf("enter the value of a: and b:\n");
	scanf("%d%d",&a,&b);
	add=a+b;
	sub=a-b;
	mul=a*b;
	divi=a/b;
	mod=a%b;
	printf("addition:%d",add);
	printf("subtraction:%d",sub);
	printf("multiplication:%d",mul);
	printf("division:%d",divi);
	printf("modulo:%d",mod);
	return 0;
	
	
}
