/*
Accept a character from user and change its case
means if input is A then print a or
if input is t then print T
*/
#include <stdio.h>

int main()
{
	char ch, chTemp;
	
	printf("\nEnter any character: ");
	scanf(" %c", &ch);
	chTemp = ch;

	if(ch >= 65 && ch <= 90)
	{
		ch = ch + 32;
		printf("\nOpposit case of: %c is: %c", chTemp, ch);
	}
	else if(ch >= 97 && ch <= 122)
	{
		ch = ch - 32;
		printf("\nOpposit case of: %c is: %c", chTemp, ch);
	}
	else
	{
		printf("\nThis is not a character!!!");
	}
	
	return 0;
}
