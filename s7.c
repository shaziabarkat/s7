#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the no");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	{
		printf("a is largest");
	}
	else if(b>c && b>a)
	{
		printf("b is largest");
	}
	else
	{
		printf("c is largest");
	}
	return 0;
	
}