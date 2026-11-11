//Accept a number and print the factorial of the number
#include <stdio.h>

int main()
{
	int i, no, fact = 1;
	
	printf("\nEnter number: ");
	scanf("%d", &no);

	/*for(i = 1; i <= no; i++)
	{
		fact = fact * i;
	}*/
	for(i = no; i >= 1; i--)
	{
		//fact = fact * i;
		fact *= i;
	}
	printf("\nFactorial of %d is %d", no, fact);

	return 0;	
}
