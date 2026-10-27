#include <stdio.h>

int main()
{
	float balance;
	int withAmt;
	
	printf("\nWelcome to Bank application...");
	printf("\n================================");
	
	printf("\nEnter your current balance: ");
	scanf("%f", &balance);
	printf("\nEnter amount of withdrawal: ");
	scanf("%d", &withAmt);
	
	if((balance - withAmt) < 2000)
	{
		printf("\nYou have low balance for this withdraw");
	}
	else
	{
		balance = balance - withAmt;
		printf("\nYour current balance after withdraw of %d is: %.2f",withAmt, balance);
	}
	
	return 0;	
}
