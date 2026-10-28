#include <stdio.h>

int main()
{
	int no1, no2, no3;
	
	printf("\nEnter first number : ");
	scanf("%d", &no1);
	printf("\nEnter second number: ");
	scanf("%d", &no2);
	printf("\nEnter third number : ");
	scanf("%d", &no3);
	
	/*if(no1 > no2 && no1 > no3)
	{
		printf("%d is maximum than %d & %d", no1, no2, no3);
	}
	else
	{
		if(no2 > no1 && no2 > no3)
		{
			printf("%d is maximum than %d & %d", no2, no1, no3);
		}
		else
		{
			if(no3 > no1 && no3 > no2)
			{
				printf("%d is maximum from %d & %d", no3, no1, no2);
			}
			else
			{
				printf("\nSome numbers are equal!!!");
			}
		}
	}*/
	
	if(no1 > no2)
	{
		if(no1 > no3)
		{
			printf("%d", no1);
		}
	}
	else
	{
		if(no2 > no1)
		{
			if(no2 > no3)
			{
				printf("%d", no2);
			}
		}
		else
		{
			printf("\n%d", no3);
		}
	}
	
	return 0;
}
