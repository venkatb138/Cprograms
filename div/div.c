#include <stdio.h>

int main()

{

	// declaration of variables
	
	int i4num1 ;

	int i4num2 ;

	int i4resultdiv ;

	// scanning the values from the user
	
	printf("Enter the num1:") ;
	scanf("%d",&i4num1) ;

        printf("Enter the num2:") ;
        scanf("%d",&i4num2) ;
	

	// sum logic
	
	i4resultdiv = i4num1 / i4num2 ;

	// printing the output
	
	printf("Result of 2 given numbers is: %d\n",i4resultdiv) ;

	// exit from the main
	 
	return 0 ;

}


/*
 * output:
 *
 *  Enter the num1: 10
 *  Enter the num2: 5
 *  Result of two given numbers is: 2
*/
