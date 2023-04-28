// fibonacci program to print the fibonacci series
#include<stdio.h>
int main()
{
	int a=0 , b=1, c , number ;
	printf("Enter the number:") ;
	scanf("%d",&number) ;
	if(number<1)
	{
		printf("Please enter the number greater than one:\n") ;
		scanf("%d",&number) ;
	}
	for(int i=1; i<=number ;i++)
	{
		printf("%d",a) ;
		c = a + b ;
		a = b ;
		b = c ;
	}
	// Exit from main
	return 0 ;
}

	
