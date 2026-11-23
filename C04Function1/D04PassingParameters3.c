#include <stdio.h>

int main()
{
	void displayNumbers(int);
	int no;
	
	printf("\nEnter the upper range: ");
	scanf("%d", &no);
	
	displayNumbers(no);
	
	return 0;
}

void displayNumbers(int n)
{
	int i;
	
	for(i = 1; i <= n; i++)
	{
		printf("\t%d", i);
	}
}
