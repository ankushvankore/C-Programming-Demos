#include <stdio.h>

int main()
{
	int purAmt, sellAmt, profit, loss;
	
	printf("\nProgram to calculate profit / loss");
	printf("\n===================================");
	
	printf("\nEnter Purchase Amount: ");
	scanf("%d", &purAmt);
	printf("\nEnter Selling Amount : ");
	scanf("%d", &sellAmt);
	
	if(purAmt > sellAmt)
	{
		loss = purAmt - sellAmt;
		printf("\nYou have loss of: %d rs.", loss);
	}
	else
	{
		profit = sellAmt - purAmt;
		printf("\nYou have profit of %d rs.", profit);
	}
	
	return 0;
}
