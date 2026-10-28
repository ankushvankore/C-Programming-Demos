#include <stdio.h>

int main()
{
	int amount;
	float discount, net;
	
	printf("\nEnter amount: ");
	scanf("%d", &amount);
	
	if(amount < 1000)
	{
		discount = amount * 0.02;
	}
	else
	{
		if(amount >= 1000 && amount < 3000)
		{
			discount = amount * 0.05;
		}
		else
		{
			if(amount >= 3000 && amount < 5000)
			{
				discount = amount * 0.10;
			}
			else
			{
				discount = amount * 0.15;
			}
		}
	}
	
	net = amount - discount;	
	
	printf("\nDiscount  : %.2f", discount);
	printf("\nNet amount: %.2f", net);
	
	
}
