// terinary program

#include <stdio.h>
int main()
{
	// variable declaration snd assign the values
	
        int a = 10 ;

	int b ;

	// logic
	
	b = ++a + ++a ;

	printf("%d",b) ;

	return 0 ;
}


/*
 *
 *
 * output: 24
 * explanation: 
 *              will incriment 1st means ++a = 11 -> 1st
 *              will incriment 2nd means ++a = 12 -> 2nd
 *              will update 1st 11 -> 12
 *              1st + 2nd = 12 + 12 = 24
 * 
 *                                    
 *             
 *
 *
 */
