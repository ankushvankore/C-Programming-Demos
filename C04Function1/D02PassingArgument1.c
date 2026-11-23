#include <stdio.h>

int main()
{
	void displayNumber(int);
	int no;
	
	printf("\nEnter any number: ");
	scanf("%d", &no);
	
	displayNumber(no);
	
	return 0;
}

void displayNumber(int no)
{
	printf("\nNumber you enterd: %d", no);
}
