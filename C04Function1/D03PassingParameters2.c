#include <stdio.h>

int main()
{
	int no1, no2;
	void calculateAddition(int, int);
	
	printf("\nEnter 1st Number: ");
	scanf("%d", &no1);
	printf("\nEnter 2nd Number: ");
	scanf("%d", &no2);
	
	calculateAddition(no1, no2);
	
	calculateAddition(80, 50);
	
	//calculateAddition(8); 	//this is not allowed
	calculateAddition(6, 7.7);
	
	return 0;
}

void calculateAddition(int n1, int n2)
{
	int addition = n1 + n2;
	
	printf("\nAddition: %d", addition);
}
