//To display all numbers in specific ragnge
//eg. suppose the range is 20 to 31 then output will be
//20 21 22 23 24 25 26 27 28 29 30 31
#include <stdio.h>

int main()
{
	int i, start, end;
	
	printf("\nEnter starting number: ");
	scanf("%d", &start);
	printf("\nEnter ending number  : ");
	scanf("%d", &end);
	
	for(i = start; i <= end; i++)
	{
		printf("%d, ", i);
	}
	
	return 0;
}
