#include <stdio.h>

int main()
{
	int no1, no2, add, sub, mul, rem;
	float div;
	
	printf("\nEnter 1st Number: ");
	scanf("%d", &no1);
	printf("\nEnter 2nd Number: ");
	scanf("%d", &no2);
	
	add = no1 + no2;
	sub = no1 - no2;
	mul = no1 * no2;
	div = (float)no1 / no2;
	rem = no1 % no2;
	
	printf("\nAddition      : %d", add);
	printf("\nSubtraction   : %d", sub);
	printf("\nMultiplication: %d", mul);
	printf("\nDivision      : %f", div);
	printf("\nReminder      : %d", rem);
	
	return 0;
}
