//Program to check whether the number is prime or not
#include <stdio.h>

int main()
{
	int no, i;
	
	printf("\nEnter number: ");
	scanf("%d", &no);
	
	for(i = 2; i <= no; i++)
	{
		if(no % i == 0)	
		{
			break;
		}
	}
	
	if(no == i)
	{
		printf("\n%d number is prime...", no);
	}
	else
	{
		printf("\n%d number is not prime...", no);
		printf("\nThis number is divisible by: %d", i);
	}
}
