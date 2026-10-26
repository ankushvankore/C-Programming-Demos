#include <stdio.h>

int main()
{
	float balance;
	
	printf("\nEnter your balance: ");
	scanf("%f", &balance);
	
	if(balance < 2000)
	{
		printf("\nSorry, you have low balance!!!");
	}
	
	return 0;
}
