#include <stdio.h>

int main()
{
	int no1, no2, temp;
	
	printf("\nEnter 1st Number: ");
	scanf("%d", &no1);
	printf("\nEnter 2nd Number: ");
	scanf("%d", &no2);
	
	temp = no1;
	no1 = no2;
	no2 = temp;
	
	printf("\nAfter Swaping");
	printf("\nNo1: %d", no1);
	printf("\nNo2: %d", no2);
	
	return 0;	
}
