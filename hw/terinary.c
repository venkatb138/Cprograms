// terinary program

#include <stdio.h>
int main()
{
	// variable declaration snd assign the values
	
        int a = 10 ;

	int b ;

	// logic
	
	b = a++ + a++ ;

	printf("%d",b) ;

	return 0 ;
}


/*
 *
 *
 * output: 21
 *
 * explanation: a= 10
 *              b=10
 *              a=11
 *              b=10+11
 *              b=21
 *
 *
 */
