#include<stdio.h>
int main()
{
	int n;
	printf("enter value:");
	scanf("%d",&n);

	int a=0;
	
	while(n>0)
	{
		n=n/10;
		a++;
	}
	printf("total digit:%d",a);
}
/*
output:
enter value:346846
total digit:6
*/