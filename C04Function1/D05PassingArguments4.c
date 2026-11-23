#include <stdio.h>

int main()
{
	int lowRange, highRange;
	void printNumbersInRange(int, int);
	
	printf("\nEnter Lower Range Number: ");
	scanf("%d", &lowRange);
	printf("\nEnter Upper Range Number: ");
	scanf("%d", &highRange);
	
	printNumbersInRange(lowRange, highRange);
	
	printNumbersInRange(70, 80);
	
	return 0;
}

void printNumbersInRange(int l, int h)
{
	int i;
	
	for(i = l; i <= h; i++)
	{
		printf("\t%d", i);
	}
	printf("\n");
}
