#include <stdio.h>
//Accept the amount from user and calculate 10% discount and net amount
//discount = amount * 0.10;
//net = amount - discount;
int main()
{
	int amount;
	float discount, net;
	
	printf("\nEnter amount: ");
	scanf("%d", &amount);
	
	discount = amount * 0.10;
	net = amount - discount;
	
	printf("\nDiscount  : %.2f", discount);
	printf("\nNet Amount: %.2f", net);
	
	return 0;
}

