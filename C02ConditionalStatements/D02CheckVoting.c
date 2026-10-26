#include <stdio.h>

int main()
{
	int age;
	
	printf("\nEnter your age: ");
	scanf("%d", &age);
	
	if(age >= 18)
	{
		printf("\nCongratulations!!! You are valid for voting...");
	}
	
	return 0;
}
