#include <stdio.h>
int main()
{
	// Variable declaration
	char operator ;
	int a , b , result ;

	// Scan the operator from the user
	printf("Enter the operator you want to perform:") ;
        scanf("%c",&operator) ;

	switch(operator)
	{
		case '+':
			printf("Enter the a value:") ;
                        scanf("%d",&a) ;

                        printf("Enter the b value:") ;
                        scanf("%d",&b) ;
			result = a + b ;

			printf("%d",result) ;
			break ;
	        case '-':
			printf("Enter the a value:") ;
                        scanf("%d",&a) ;
        
			printf("Enter the b value:") ;
                        scanf("%d",&b) ;
			result = a-b ;


			printf("%d",result) ;
			break ;
		case '*':
			printf("Enter the a value:") ;
                        scanf("%d",&a) ;

                        printf("Enter the b value:") ;
                        scanf("%d",&b) ;
			result = a*b ;

			printf("%d",result) ;
			break ;
		case '/':
			printf("Enter the a value:") ;
                        scanf("%d",&a) ;

                        printf("Enter the b value:") ;
                        scanf("%d",&b) ;
			result = a/b ;

			printf("%d",result) ;
			break ;
		case '%':
			printf("Enter the a value:") ;
                        scanf("%d",&a) ;

                        printf("Enter the b value:") ;
                        scanf("%d",&b) ;
			result = a%b ;

			printf("%d",result) ;
			break ;
		default:
			printf("Enter the valid input") ;
		}


	// Exit
	return 0 ;

}
