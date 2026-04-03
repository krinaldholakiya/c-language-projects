#include<stdio.h>
int main()
{
	float s;
	printf("enter your base salary:");
	scanf("%f",&s);
	
	float HRA;
	printf("enter HRA:");
	scanf("%f",&HRA);
	
	float DA;
	printf("enter DA:");
	scanf("%f",&DA);
	
	float TA;
	printf("enter TA:");
	scanf("%f",&TA);
	
	float n=s*HRA/100;
	float x=s*DA/100;
	float y=s*TA/100;
	
	printf("your gross salary:%f",s+n+x+y);
}
/*
output:
enter your base salary:2000
enter HRA:10
enter DA:15
enter TA:25
your gross salary:3000.000000
*/
 