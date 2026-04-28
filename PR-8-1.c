#include<stdio.h>
int main()
{
	char s[100];
	printf("enter any string:");
	gets(s);
	
	char *p=s;
	int n=0;
	for(p=s;*p!='\0';p++)
	{
		n++;
	}
	printf("length:%d",n);
}
/*
output:
enter any string:you tube
length:8

enter any string:hii,how are you?
length:16
*/