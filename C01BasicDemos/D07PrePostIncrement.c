#include <stdio.h>

int main()
{
	int no = 8;
	int no1, no2;
		
	printf("\nOriginal No: %d", no);		//8	
	
	no++;
	printf("\nAfter increment: %d", no);	//9
	
	no--;
	printf("\nAfter decrement: %d", no);	//8
	
	++no;
	printf("\nAfter pre increment: %d", no);	//9
	
	printf("\nPost-Increment: %d", no++);	//9
	printf("\nAfter Post-Increment: %d", no);	//10
	
	printf("\nPost Increment: %d", ++no);	//11
	
	no1 = ++no;	
	//Pre- Increment - first increment will happen and then the incremented value
	//will get assigned to the LHS of =
	printf("\nNo: %d", no);			//12
	printf("\nNo1: %d", no1);		//12
	
	no2 = no++;
	//post-increment - first RHS value will get assigned to LHS and then
	//the RHS value will get incremented
	printf("\nNo: %d", no);			//13
	printf("\nNo2: %d", no2);		//12
	
	return 0;
}
