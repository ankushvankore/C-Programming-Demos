#include <stdio.h>

int main()
{
	int day;
	
	printf("\nEnter a day in number(1-7): ");
	scanf("%d", &day);
	
	switch(day)
	{
		default: 
			printf("\nWrong input...");
			break;
		case 5:
			printf("\nThursday!!!");
			break;
		case 1:
			printf("\nSunday!!!");
			break;
		case 2:
			printf("\nMonday!!!");
			break;
		case 3:
			printf("\nTuesday!!!");
			break;
		case 4:
			printf("\nWedneday!!!");
			break;
		case 6:
			printf("\nFriday!!!");
			break;
		case 7:
			printf("\nSaturday!!!");
			break;
	}
	
	return 0;
}
