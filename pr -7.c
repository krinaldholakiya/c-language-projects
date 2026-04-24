#include<stdio.h>
int addition()
{
	int a,b;
	printf("enter a:\n");
	scanf("%d",&a);
	
	printf("enter b:\n");
	scanf("%d",&b);
	
	printf("addition:%d\n",a+b);
}


int bad(int a,int b)
{	
	printf("bad:%d\n",a-b);
}


int multi()
{
	int a,b;
	printf("enter a:\n");
	scanf("%d",&a);
	
	printf("enter b:\n");
	scanf("%d",&b);

return a*b;
}

float devi()
{
	 int a,b;
 	 printf("enter a");
 	 scanf("%d",&a);
 	 
 	  printf("enter b");
 	 scanf("%d",&b);
 	 
 	 printf("devision:%d",a/b);
}


int per()
{
	int a,b;
	printf("enter a:");
	scanf("%d",&a);
	
	printf("enter b:");
	scanf("%d",&b);
	
	printf("remainder:%d\n",a%b);
	}

int main()
{
int i;
for(;;)
{

 	int a;
 	printf("press 1 for +\n");
	printf("press 2 for -\n");
	printf("press 3 for *\n");
	printf("press 4 for /\n");
	printf("press 5 for %%\n");
	printf("press 0 for exit\n");
	printf("enter your choice:"); 
	scanf("%d",&a);
	
	
	if(a==0)
	{
	    break;
	}
	
	switch(a)
	{

	case 1:
	if(a==1)
	{
	addition();
	break;
    }
    
    case 2:
    if(a==2)
	{
	int a,b;
	printf("enter a and b:");
	scanf("%d%d",&a,&b);
	bad(a,b);
	break;	
	}	
	case 3:
	if(a==3)
	{
	int ans=multi();
	printf("ans:%d\n",ans);
	break;
	}
	case 4:
	if(a==4)
	{
	devi();
	break;
	}
	case 5:
	if(a==5)
	{
	per();
	}
	break;
	}
}
}
/*
output:
press 1 for +
press 2 for -
press 3 for *
press 4 for /
press 5 for %
press 0 for exit
enter your choice:1
enter a:
2
enter b:
2
addition:4
press 1 for +
press 2 for -
press 3 for *
press 4 for /
press 5 for %
press 0 for exit
enter your choice:2
enter a and b:3
2
bad:1
press 1 for +
press 2 for -
press 3 for *
press 4 for /
press 5 for %
press 0 for exit
enter your choice:3
enter a:
6
enter b:
3
ans:18
press 1 for +
press 2 for -
press 3 for *
press 4 for /
press 5 for %
press 0 for exit
enter your choice:4
enter a6
enter b3
devision:2press 1 for +
press 2 for -
press 3 for *
press 4 for /
press 5 for %
press 0 for exit
enter your choice:5
enter a:2
enter b:2
remainder:0
press 1 for +
press 2 for -
press 3 for *
press 4 for /
press 5 for %
press 0 for exit
enter your choice:0
*/

