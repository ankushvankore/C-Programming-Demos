#include <stdio.h>

int main()
{
	void calculateAreaOfTrangle(float, float);
	float base, height;
	
	printf("\nEnter base of triangle: ");
	scanf("%f", &base);
	printf("\nEnter height of triangle: ");
	scanf("%f", &height);
	
	calculateAreaOfTrangle(base, height);
	
	return 0;
}

void calculateAreaOfTrangle(float b, float h)
{
	float area = 0.5 * b * h;
	
	printf("\nArea of Triangle: %.2f", area);
}
