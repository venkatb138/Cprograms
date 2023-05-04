#include<stdio.h>
int main()
{
        int i, j, k, num ;
	printf("Enter the number to print the pattern") ;
	scanf("%d", &num) ;
	for(i = 1; i <= num; i++)
	{
		for(j = num; j > i; j--)
		{
			printf("  ") ;
		}
		for(k = 0; k < (i * 2)-1; k++)
		{
			printf("* ") ;
		}
		printf("\n") ;
	
	}
	return 0 ;
}
