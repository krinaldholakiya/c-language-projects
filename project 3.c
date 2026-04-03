#include<stdio.h>
int main()
{
	int a;
	printf("enter first angle:");
	scanf("%d",&a);
	
	int b;
	printf("enter second angle:");
	scanf("%d",&b);
	
	int x=180-(a+b);
	
	printf("third angle:%d",x);
}
/*
output:
enter first angle:20
enter second angle:100
third angle:60
*/