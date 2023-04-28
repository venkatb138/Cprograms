// Factorial program, it prints the factorial of given number

#include<stdio.h>
int main()
{
	// Variable declaration
	int factorial = 1 ;
	int number ;
	// Read values from the user
	printf("Enter a value to know the factorial of that number:\n") ;
	scanf("%d",&number) ;
	// Core program
	if(number < 0)
        {
                printf("Enter the number greater than zero\n") ;
        }

	if(number == 0)
	{
		printf("1");
	}
	for(int i=1; i <= number; i++)
	{
		factorial = factorial * i ;
	}
	printf("%d\n",factorial) ;

	// Exit from the main
	return 0 ;
}



