#include <stdio.h>
//Program to print even numbers form 1 to 20

int main()
{
	int i = 1;
	
	/*while(i <= 20)
	{
		printf("\n%d", i);
		i += 2;
	}*/
	
	while(i <= 20)
	{
		if(i % 2 == 0)
		{
			printf("\n%d", i);
		}
		i++;
	}
	
	return 0;
}
