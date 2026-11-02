/*
Accept a 4 digit number from user and calclate the sum of all digits
eg 4561 = 4 + 5 + 6 + 1 = 16
*/

#include <stdio.h>

int main()
{
	int no, d1, d2, d3, d4, sum;
	
	printf("\nEnter any 4 digit number: ");
	scanf("%4d", &no);
	
	d1 = no / 1000;
	no = no % 1000;
	
	d2 = no / 100;
	no = no % 100;
	
	d3 = no / 10;
	d4 = no % 10;
	
	sum = d1 + d2 + d3 + d4;
	
	printf("\n%d + %d + %d + %d = %d", d1, d2, d3, d4, sum);
	//printf("\nSum of digits: %d", sum);
	
	return 0;
}
