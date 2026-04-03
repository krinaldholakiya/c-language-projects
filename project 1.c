#include<stdio.h>
int main()
{
	float c;
	printf("enter celsius");
	scanf("%f",&c);
	
	float f=(9.0/5.0*c)+32;
	
	printf("fahreinheit:%f",f);
}
 /*output
   enter celsius42
   fahreinheit:107.599998
*/