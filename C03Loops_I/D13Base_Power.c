//Calculate base raised to power
//eg 8 raised to 3 = 512
#include <stdio.h>
#include <math.h>
int main()
{
	int i, base, power, ans = 1;
	
	printf("\nEnter base : ");
	scanf("%d", &base);
	printf("\nEnter power: ");
	scanf("%d", &power);
	
	for(i = 1; i <= power; i++)
	{
		ans = ans * base;
	}
	//ans = pow(base, power);
	printf("\nAnswer: %d", ans);
	
	
	
	return 0;
}
