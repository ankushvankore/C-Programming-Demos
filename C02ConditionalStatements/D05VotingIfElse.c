#include <stdio.h>

int main()
{
	int age, years;
	
	printf("\nEnter your age: ");
	scanf("%d", &age);
	
	if(age >= 18)
	{
		printf("\nCongratulations!!! You are valid for voting...");
	}
	else
	{
		years = 18 - age;
		printf("\nSorry!!! You are not valid for voting...\nWait for %d years.", years);
	}
	
	return 0;
}
