// hw with assign operator

#include <stdio.h>

int main()

{
	// variable declaration
	
	int a, b ,r ;

	// assign values
	 a = 10 ;

	 b = 20 ;

	 // logic

	 r = a^=b^=a^=b ;

	 // print the output 

	 printf("%d", r) ;

	 // exit
	 
	 return 0 ;

}


/*
 *
 *
 * output: 20 
 *
 */

