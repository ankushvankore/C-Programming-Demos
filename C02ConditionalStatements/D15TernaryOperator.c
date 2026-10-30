#include <stdio.h>

int main()
{
	int no1, no2, max;
	
	printf("\nEnter First Number : ");
	scanf("%d", &no1);
	printf("\nEnter Second Number: ");
	scanf("%d", &no2);
	
	/*if(no1 > no2)
	{
		//printf("\n%d is max!!!", no1);
		max = no1;
	}
	else
	{
		//printf("\n%d is max!!!", no2);
		max = no2;
	}
	printf("\n%d is max!!!", max);*/
	
	//(no1 > no2) ? printf("\n%d is max!!!", no1) : printf("\n%d is max!!!", no2);
	max = (no1 > no2) ? no1 : no2;
	printf("\n%d is max!!!", max);
	
	return 0;
}
