#include<stdio.h>
int main(){

int m;
char grade;
	printf("ENTER MARKS:");
	scanf("%d",&m);

grade=(80<=m)?'A':
	  (60<=m)?'B':
	  (50<=m)?'C':
	  (35<=m)?'D':'F';
	  printf("GRADE:%c",grade);

/*

OUTPUT:

enter marks:55
GRADE:C

*/

switch(grade)
{
    case 'A':
	printf("\nexcellent work");
	break;
    case 'B':
	printf("\nwelldone");
	break;
    case 'C':
	printf("\ngood job");
	break;
    case 'D':
	printf("\nyou passed");
	break;
    case 'F':
	printf("\nsorry!,you failed");
	break;
	default:
		printf("\ninvalid");
}

/*

OUTPUT:

ENTER MARKS:55
GRADE:C
good job
  
*/
 
  
 if(grade >='A'&&grade <='D')
 {
 printf("\ncongratulations! you are eligible for the next level."); 
 }
 
 else
 {
 printf("\nplease try again next time.");
 }
 }
/*

OUTPUT:

ENTER MARKS:92
GRADE:A
excellent work
congratulations! you are eligible for the next level

ENTER MARKS:12
GRADE:F
sorry!,you failed
please try again next time.

*/








