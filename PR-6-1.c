#include<stdio.h>
int main()
{
	int n,string,reversed=0,remainder;
	
	printf("enter string:");
	scanf("%d",&n);
	
	string=n;
	
	while(n!=0)
	{
	remainder=n%10;
	reversed=reversed*10+remainder;
	n=n/10;	
	}
	
	if(string==reversed)
	printf("the given string is palindrome.",string);
	
	else if(string!=reversed)
	printf("the given string is not palindrome.",string);
}
/*
output:
enter string:naman
the given string is not palindrome.

enter string:1221
the given string is palindrome.
*/




