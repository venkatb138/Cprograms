// Program to access the array via pointer
#include<stdio.h>
int main(){
	// Declaration of variables
	int array_a[5] = {1,2,3,4,5} ;
	int *ptr ;
	int size ;
	// Assign the values to required varaibles
	ptr = array_a ;
	size = sizeof(array_a)/sizeof(array_a[0]) ;
	for(int index=0 ; index < size; index++){
		printf("%d\n",*ptr) ;
		ptr++ ;
	}
	return 0 ;
}


