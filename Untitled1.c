#include<stdio.h>
int main ()
{
	printf("Atharv");
	int a;
	scanf("%d",& a);
	
	
	if (a>90 && a<=100)
	{
	printf("grade =A");
	
	}
	else if (a>80 && a<=90)
	{
	printf("grade = B");
	}
	else if (a>70 && a<=80)
	{
	printf("grade = C");
	}
	else if (a>60 && a<=70)
	{
	printf("grade = d");
	}
	else if(a<=60)
	{
		printf("grade =f");
	}
//	else ()
//	{
	
//	printf("please enter a valid no.");
  //         }
	return 0;
}
