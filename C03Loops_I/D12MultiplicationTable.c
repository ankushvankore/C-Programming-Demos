//Print multiplication table of user entered number
//eg. 4 8 12 16 20 24 28 32 36 40
#include <stdio.h>

int main()
{
	int i, no;
	
	printf("\nEnter number: ");
	scanf("%d", &no);
	
	for(i = 1; i <= 10; i++)
	{
		//ans = no * i;
		printf("%d\t", no * i);
	}
	
	return 0;
}
