#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *Main-entry  point
 *Return: must be 0(success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	scanf("%d",&n);
	int ldigit = n%10;
	if(ldigit>5)
	{
		printf("Last digit of %d is %d and is greater than 5",n,ldigit);
	}
        else if(ldigit==0)
	{
	        printf("Last digit of %d is %d and is 0",n,ldigit);
	}
        else if(ldigit<6!=0)
	{
	        printf("Last digit of %d is %d and is less than 6 and not 0",n,ldigit);
	}	
	return (0);
}
