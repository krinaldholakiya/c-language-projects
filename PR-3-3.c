#include<stdio.h>

int main()
{
	int n,x,y;
	printf("enter number:");
	scanf("%d",&n);
	
	y=n%10;
	x=n;
	while(x>=10)
	{
		x=x/10;
	}printf("%d",x+y);
}
/*
output:

enter number:154841
2

*/



