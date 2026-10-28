#include <stdio.h>

int main()
{
	int english, maths, science, sst, hindi, total;
	float average;
	
	printf("\nEnter marks of English: ");
	scanf("%d", &english);
	printf("\nEnter marks of Maths  : ");
	scanf("%d", &maths);
	printf("\nEnter marks of Science: ");
	scanf("%d", &science);
	printf("\nEnter marks of SST    : ");
	scanf("%d", &sst);
	printf("\nEnter marks of Hindi  : ");
	scanf("%d", &hindi);
	
	total = english + maths + science + sst + hindi;
	average = (float) total / 5;
	
	printf("\nTotal marks  : %d", total);
	printf("\nAverage marks: %.2f", average);
	
	/*if(average >= 85)
	{
		printf("\nCongratulations!!! You got Dist.");
	}
	else
	{
		if(average >= 75)
		{
			printf("\nGood Jov!!! You got A Grade!");
		}
		else
		{
			if(average >= 60)
			{
				printf("\nThats ok!!! You got B Grade!");
			}
			else
			{
				if(average >= 45)
				{
					printf("\nNot bad!!! You got C Grade!");
				}
				else
				{
					if(average >= 35)
					{
						printf("\nHave to improve!!! You got D Grade");
					}
					else
					{
						printf("\nSorry!!! You are fail. Try again...");
					}
				}
			}
		}
	}*/
	if(average >= 85)
	{
		printf("\nCongratulations!!! You got Dist.");
	}
	else if(average >= 75)
	{
		printf("\nGood Jov!!! You got A Grade!");
	}
	else if(average >= 60)
	{
		printf("\nThats ok!!! You got B Grade!");
	}
	else if(average >= 45)
	{
		printf("\nNot bad!!! You got C Grade!");
	}
	else if(average >= 35)
	{
		printf("\nHave to improve!!! You got D Grade");
	}
	else
	{
		printf("\nSorry!!! You are fail. Try again...");
	}
	
	return 0;
}
