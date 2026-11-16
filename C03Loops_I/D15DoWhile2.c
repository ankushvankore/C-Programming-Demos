#include <stdio.h>

int main()
{
	int no;
	char ch;
	
	do
	{
		printf("\nEnter a number: ");
		scanf("%d", &no);
		printf("\nNumber: %d", no);
		
		printf("\nDo you want to continue? ");
		scanf(" %c", &ch);
	}while(ch == 'y' || ch == 'Y');
	
	return 0;
}
