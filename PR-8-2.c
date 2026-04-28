#include<stdio.h>
int main()
{
	int a;
	printf("enter array size:");
	scanf("%d",&a);
	
	int s[a][a];
	int i,j;
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=a;j++)
		{
		printf("enter element:");
		scanf("%d",&s[i][j]);
		printf("\n");
	}
		}
	
	printf("cube of all elements:\n");
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=a;j++)
		{
			printf("%d ",s[i][j]*s[i][j]*s[i][j]);
		}printf("\n");
	
	}}
/*
output:
enter array size:3
enter element:1

enter element:2

enter element:3

enter element:1

enter element:2

enter element:3

enter element:1

enter element:2

enter element:3

cube of all elements:
1 8 27
1 8 27
1 8 27
*/
	
	