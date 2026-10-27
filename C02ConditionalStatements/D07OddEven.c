#include <stdio.h>

int main()
{
	int no, rem;
	
	printf("\nProgram to check whether the no is Odd or Even");
	printf("\n================================================");
	
	printf("\nEnter any number: ");
	scanf("%d", &no);
	
	//rem = no % 2;
	
	if(no % 2 == 0)
	{
		printf("\nThe number %d is Even...", no);
	}
	else
	{
		printf("\nThe number %d is Odd...", no);
	}
	
	return 0;
}
