//Single line Comment
/*
This is multiline comment
these statements never get executed
*/
/*
Problem statement - 
Accept basic salary of employee and calculate his/her net salary

netSalary = basicSalary + da + hra - pf
da = 50% of basicSalary
hra = 20% of basicSalary
pf = 5% of basicSalary
*/

#include <stdio.h>

int main()
{
	int basicSalary;
	float da, hra, pf, net;
	
	printf("\nEnter Basic Salary: ");
	scanf("%d", &basicSalary);
	
	da = basicSalary * 0.50;
	hra = basicSalary * 0.20;
	pf = basicSalary * 0.05;
	net = basicSalary + da + hra - pf;
	
	printf("\nDA        : %.2f", da);
	printf("\nHRA       : %.2f", hra);
	printf("\nPF        : %.2f", pf);
	printf("\nNet Salary: %.2f", net);
	
	return 0;
}
