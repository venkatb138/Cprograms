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
                        printf(" ") ;
                }
                for(k = 1; k <= (i * 2)-1; k++)
                {
			if((k == 1) || (k == (i*2)-1) || (i == num))
			{
				printf("*") ;
			}
			else
			{
				printf(" ") ;
			}
		}
			printf("\n") ;

        }
        return 0 ;
}
