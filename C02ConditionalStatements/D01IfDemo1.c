#include <stdio.h>

int main()
{
	int amount;
	float discount,net;
	
	printf("\nEnter amount: ");
	scanf("%d", &amount);
	
	if(amount>=1000)
	{
		discount=amount*0.10;		
	}
	net=amount-discount;
	
	printf("\nDiscount  : %.2f",discount);
	printf("\nNet amount: %.2f",net);
	
	return 0;
}
