#include<stdio.h>
int main(){
	// Declaration of array
	int array_a[] = {1} ;
	// Declaration of variable size to store the number of elements array can hold
	int size ;
	// Formulae to get the size
	size = sizeof(array_a)/sizeof(array_a[0]) ;
	// Printing the size
	printf("Number of integers can store in array_a is %d\n",size) ;
	// for loop to print the each element in the array_a
	for(int i=0;i<size;i++){
		printf(" %d th element of array_a is:%d\n",i,array_a[i]) ; 
	}
	// Exit from main
	return 0;
}
