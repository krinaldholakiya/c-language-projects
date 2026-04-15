#include<stdio.h>
int main()
{
	int i,j,c=11;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{ 
			
			printf("%d ",c);
			c=c+1;
		}
		printf("\n");
	}
}
/*
output:
11
12 13
14 15 16
17 18 19 20
*/