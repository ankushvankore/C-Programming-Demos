//Accept a number and print all the numbers starting from 1 to that number
//eg. user is entring 6 then output will be 1 2 3 4 5 6
#include <stdio.h>

int main()
{
	int i, no;
	
	printf("\nEnter last number: ");
	scanf("%d", &no);
	
	for(i = 1; i <= no; i++)
	{
		printf("\t%d", i);
	}
	
	return 0;
}
