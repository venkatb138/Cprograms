// Printing the even numbers in between the range
#include<stdio.h>
int main()
{
	// Variable declaration
	int start , end ;
	// Read the values from the user
	printf("Enter the start value:\n") ;
	scanf("%d",&start) ;
	printf("Enter the end value:\n") ;
	scanf("%d",&end) ;
	if(end < start)
	{
		printf("Please enter the end value greater than the start value to print the even numbers in between them:\n") ;
		scanf("%d",&end) ;
	}
	for(int i=start; i<=end; i++)
	{
		if(i%2 == 0)
		{
			printf("%d\t",i) ;
		}
	}
	// Exit 
	return 0;
}




