#include <stdio.h>

int main()
{
	int no;
	
	printf("\nProgram to check whether the no is +ve or -ve");
	printf("\n================================================");
	
	printf("\nEnter any number: ");
	scanf("%d", &no);
	
	if(no >= 0)
	{
		printf("\nThe number %d is +ve", no);
	}
	else
	{
		printf("\nThe number %d is -ve", no);
	}
	
	return 0;
}
