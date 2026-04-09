#include<stdio.h>
int main()
{
	char ch='A';
	do
	{
		printf("%c",ch);
		ch=ch+4;
	}while(ch<='Z');
}
/*
output:
AEIMQUY
*/