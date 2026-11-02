#include <stdio.h>

int main()
{
	char ch = '9';
	
	printf("\nEnter any character: ");
	scanf(" %c", &ch);
	
	if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
	{
		printf("\nThis character is vovel!!!");
	}
	else
	{
		printf("\nThis character is not a vovel!!!");
	}
	
	return 0;
}
