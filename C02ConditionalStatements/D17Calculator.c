#include <stdio.h>

int main()
{
	int no1, no2, sum, sub, mul, mod;
	float div;
	char ch;
	
	printf("\nEnter First Number : ");
	scanf("%d", &no1);
	printf("\nEnter Second Number: ");
	scanf("%d", &no2);
	
	printf("\na. Addition");
	printf("\nb. Subtraction");
	printf("\nc. Multiplication");
	printf("\nd. Division");
	printf("\ne. Modulus");
	printf("\nEnter your choice (a-e): ");
	scanf(" %c", &ch);
	
	switch(ch)
	{
		case 'a':
			sum = no1 + no2;
			printf("\nAddition: %d", sum);
			break;
		case 'b':
			sub = no1 - no2;
			printf("\nSubtraction: %d", sub);
			break;
		case 'c':
			mul = no1 * no2;
			printf("\nMultiplication: %d", mul);
			break;
		case 'd':
			div = (float)no1 / no2;
			printf("\nDivision: %.2f", div);
			break;
		case 'e':
			mod = no1 % no2;
			printf("\nMod: %d", mod);
			break;
		default:
			printf("\nWrong input...");
	}
	return 0;
}
