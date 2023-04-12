//case3

#include <stdio.h>

int main()

{

	// scanning the values from the user

        printf("Enter the num1:") ;
        scanf("%d",&i4num1) ;

        printf("Enter the num2:") ;
        scanf("%d",&i4num2) ;

	
	// declaration of variables
	
	int i4num1 ;

	int i4num2 ;

	int i4resultsum ;


	// sum logic
	
	i4resultsum = i4num1 + i4num2 ;

	// printing the sum output
	
	printf("Result of 2 given numbers is: %d\n",i4resultsum) ;

	// exit from the main
	 
	return 0 ;

}


/*
 * output:
 *
 *  Enter the num1: 10
 *  Enter the num2: 10
 *  Result of two given numbers is: Error it throws an error because we try to use the undeclared variables i4num1 and i4num2
*/
