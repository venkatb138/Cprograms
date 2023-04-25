#include <stdio.h>

int main()
{
	    // Declaration of variable
	    int percentage ;
	         
	    // Scan the values from the user
	    printf("Enter the student percentage:") ;
	    scanf("%d",&percentage) ;
	                     
	    // Checking using if and else
	    if(percentage<0 || percentage>100)
	    {
		    printf("Please enter the valid input") ;
	    }
	    else if(percentage<=35)
	    {
		    printf("fail") ;
	    }
	    else if(percentage>35 && percentage<=50)
	    {
		    printf("Below Average") ;
	    }
	    else if(percentage>50 && percentage<=75)
	    {
		    printf("Average") ;
	    }
	    else if(percentage>75 && percentage<=85)
	    {
		    printf("Above Average") ;
	    }
	    else
	    {
		    printf("Outstanding") ;
	    }

	    // Exit from main
	    return 0;
	    }
	    
