#include <stdio.h>

//Program to print odd numbers from 1 to 20

int main()
{
	int i = 1;
	
	/*while(i <= 19)
	{
		printf("\n%d", i);
		i += 2;
	}*/
	
	while(i <= 20)
	{
		if(i % 2 != 0)
		{
			printf("\n%d", i);
		}
		i++;
	}
	
	return 0;
}
