// logical operator work 

#include <stdio.h>

int main()
	
{
	// variable declaration and assigning of values
	
	int a = 10 ;

	int b = 0 ;

	int c = 20 ;

	int r ;

	// logic
	
	r = (a = b) || (b = c) ;

	// printing the output
	
	printf("%d\t",r) ;

	printf("%d\t",a) ;

	printf("%d\t",b) ;

	printf("%d\t",c) ;

	// exit
	
	return 0 ;

}





