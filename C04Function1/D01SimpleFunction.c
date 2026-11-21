#include <stdio.h>

int main()						//Calling function
{
	void sayHello();			//Prototype
	
	sayHello();					//Function Call
	sayHello();
	
	return 0;
}

//Called function
void sayHello()					//Fun Definition
{
	printf("\nThis is simple function!!!");
}
