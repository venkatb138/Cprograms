#include <stdio.h>

int main()

{

	// declaration of variables
	
	int i4num1 ;

	int i4num2 ;

	int i4resultmulti ;

	// scanning the values from the user
	
	printf("Enter the num1:") ;
	scanf("%d",&i4num1) ;

        printf("Enter the num2:") ;
        scanf("%d",&i4num2) ;
	

	// sum logic
	
	i4resultmulti = i4num1 * i4num2 ;

	// printing the multiplication output
	
	printf("Result of 2 given numbers is: %d\n",i4resultmulti) ;

	// exit from the main
	 
	return 0 ;

}


/*
 * output:
 *
 *  Enter the num1: 10
 *  Enter the num2: 10
 *  Result of two given numbers is: 100
*/
