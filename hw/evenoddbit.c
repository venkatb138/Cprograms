// program for even or odd using bitwise operator


#include <stdio.h>

int main()
{

	// Variable declaration
	
	int num ;

	printf("Enter the number to know its even or odd\n") ;

	scanf("%d",&num) ;

	// Using the if and else
	
	if(num & 1)

		printf("%d is odd number",num) ;

	else
		printf("%d iseven number",num) ;


	// Exit from main
	
	return 0 ;

}


/*
 *
 *
 */


