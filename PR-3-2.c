#include<stdio.h>
int main()
{
	int n;
	printf("enter value:");
	scanf("%d",&n);


	
	{
		if(n<10)
		{printf("one digit");}
		else if(n<100)
		{printf("two digit");}
		 else if(n<1000)
		{printf("three digit");}
		else if(n<10000)
		{printf("four digit");}
		else if(n<100000)
		{printf("five digit");}
		 else if(n<1000000)
	   	{printf("six digit");}
	   	else if(n<10000000)
		{printf("seven digit");}
		 else if(n<100000000)
		{printf("eight digit");}
	   	 else if(n<1000000000)
		{printf("nine digit");}
	   	else if(n<10000000000)
		{printf("ten digit");}
		
	}
}
/*
output:
enter value:1548
four digit

enter value:684894
six digit
*/