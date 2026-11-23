#include <stdio.h>

int main()
{
	char ch;
	void changeCaseOfCharacter(char);
	
	printf("\nEnter any character: ");
	scanf(" %c", &ch);
	
	changeCaseOfCharacter(ch);
	
	return 0;
}

void changeCaseOfCharacter(char ch)
{
	char chTemp = ch;
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
}
