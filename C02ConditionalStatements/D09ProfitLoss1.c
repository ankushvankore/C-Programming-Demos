#include <stdio.h>

int main()
{
	int purAmt, sellAmt, ans;
	
	printf("\nProgram to calculate profit / loss");
	printf("\n===================================");
	
	printf("\nEnter Purchase Amount: ");
	scanf("%d", &purAmt);
	printf("\nEnter Selling Amount : ");
	scanf("%d", &sellAmt);
	
	ans = sellAmt - purAmt;
	
	if(ans > 0)
	{
		printf("\nYou have profit of %d rs.", ans);
	}
	else
	{
		printf("\nYou have loss of: %d rs.", -ans);
	}
		
	return 0;
}
