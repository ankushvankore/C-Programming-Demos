#include <stdio.h>
/*
While writing any loop focus on 3 points
1. Initial value to be used / printed
2. Increment or decrement
3. Where to stop (Condition)
*/
//Program to print 10 to 1 numbers

int main()
{
	int i = 10;
	
	while(i >= 1)
	{
		printf("\n%d", i);
		i--;
	}
	
	return 0;
}

