/*
Accept a 4 digit number from user and reverse this number
eg 4561 = 1654
*/

#include <stdio.h>

int main()
{
	int no, d1, d2, d3, d4, rev, temp;
	
	printf("\nEnter any 4 digit number: ");
	scanf("%4d", &no);
	
	temp = no;
	
	d1 = no / 1000;
	no = no % 1000;
	
	d2 = no / 100;
	no = no % 100;
	
	d3 = no / 10;
	d4 = no % 10;
	
	rev = (d4 * 1000) + (d3 * 100) + (d2 * 10) + d1;
	
	printf("\nOriginal number: %d", temp);
	printf("\nReverse  number: %d", rev);
	
	if(temp == rev)
	{
		printf("\nThis is PALINDROME number..");
	}
	else
	{
		printf("\nThis is NOT A PALINDROME number..");
	}
	
	return 0;
}
