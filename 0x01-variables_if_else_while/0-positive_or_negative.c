#include <stdio.h>
#include <time.h>
/**
 * main - the entry point
 * Return: must be 0(success)
 */
int main(void)
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	if(n<0)
	{ 
		printf("%d is negative\n",n);
	}
	else if(n>0)
	{
		printf("%d is positive\n",n);
	}
	else(n==0);
	{
		printf("%d is zero\n",n);
	}
	return (0);
}
