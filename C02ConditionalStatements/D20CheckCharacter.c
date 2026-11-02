/*
Accept a character from user and check that whether this character is
capital character or 
small character or 
digit or 
a special character
*/

#include <stdio.h>

int main()
{
	char ch;
	
	printf("\nEnter any character: ");
	scanf(" %c", &ch);
	
	if(ch >= 65 && ch <= 90)
	{
		printf("\n%c: This is CAPITAL character!!!", ch);
	}
	else if(ch >= 97 && ch <= 122)
	{
		printf("\n%c: This is small character!!!", ch);
	}
	else if(ch >= 48 && ch <= 57)
	{
		printf("\n%c: This is digit!!!", ch);
	}
	else
	{
		printf("\n%c: This is special character!!!", ch);
	}
	
	return 0;
}
