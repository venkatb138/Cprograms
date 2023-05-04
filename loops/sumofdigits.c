#include<stdio.h>
int main()
{
	// Variable declaration
	long int num,sum=0,rem;
	// Reading the values from the user
	printf("Enter the number:");
	scanf("%ld",&num);
	// Algorithm
	while(num !=0 )
	{
		rem=num%10;
		sum += rem ;
		num = num/10 ;
	}
	// Printing the output
	printf("%ld",sum) ;
	// Exit from main
	return 0 ;
}


