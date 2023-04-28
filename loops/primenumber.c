// Prime number program 
// This program prints from 1 - "somerange"

#include <stdio.h>
int main()
{
	// Variables declaration
	int range ;
	int i ;
	int j ;
	// Read the input from the user
	printf("Enter the range you want to print the prime numbers:") ;
	scanf("%d",&range) ;
	// Core Program 
	for(i=1; i<=range; i++)
	{
		for(j=2; j<i; j++)
		{
			if(i%j == 0) // Condition
			{
				break ;
			}
		}
		if(i == j)
		{
			printf("%d\t",i) ;
		}
	}
	// Exit from main
	return 0 ;
}
