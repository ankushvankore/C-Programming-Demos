#include<stdio.h>

int main()
{
	int no1, no2, sum;
	
	printf("\nEnter first number : ");
	scanf("%d", &no1);
	printf("\nEnter second number: ");
	scanf("%d", &no2);
	
	sum = no1 + no2;
	
	printf("\nNo1: %d\nNo2: %d", no1, no2);
	printf("\nAddition: %d", sum);
	
	printf("\n%d + %d = %d", no1, no2, sum);
	
	return 0;
}
