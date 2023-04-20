// hw with assign operator

#include <stdio.h>

int main()

{
	// variable declaration
	
	int a, b ,c, d, r ;

	// assign values
	 a = 10 ;

	 b = 20 ;

	 c = 30 ;

	 d = 40 ;

	 // logic

	 r = a+=b+=c+=d+=1 ;

	 // print the output 

	 printf("%d", r) ;

	 // exit
	 
	 return 0 ;

}


/*
 *
 *
 * output:101 
 *
 */

