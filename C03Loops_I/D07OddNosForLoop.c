#include <stdio.h>

//Print odd numbers from 1 to 20

int main()
{
	int i = 1;
	
	/*for(i = 1; i <= 20; i += 2)
	{
		printf("\t%d", i);
	}*/
	
	for(i = 1; i <= 20; i++)
	{
		if(i % 2 != 0)
		{
			printf("\t%d", i);
		}
	}
	
	
	return 0;
}
