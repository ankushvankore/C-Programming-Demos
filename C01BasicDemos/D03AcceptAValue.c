#include <stdio.h>

int main()
{
	int age;
	float marks;
	char grade;
	char gender;
	
	printf("\nEnter Age   : ");
	scanf("%d", &age);
	printf("\nEnter Marks : ");
	scanf("%f", &marks);
	printf("\nEnter Grade : ");
	scanf(" %c", &grade);
	printf("\nEnter Gender: ");
	scanf(" %c", &gender);
	
	printf("\nYour age: %d", age);
	printf("\nYour marks: %.2f", marks);
	printf("\nYour grade: %c", grade);
	printf("\nYour gender: %c", gender);
	
	return 0;
}
