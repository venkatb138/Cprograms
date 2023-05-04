#include<stdio.h>
int main()
{
	int i, j, k, num ;
	printf("Entr the number:") ;
	scanf("%d",&num) ;
	for(i=num ; i >= 1; i--)
	{
		for(j=1; j <= num-i; j++)
		{
			printf(" ");
		}
		for(k=1; k <= (2*i)-1; k++)
		{
			if((k == 1) || (i == num) || k == (2*i)-1 )
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n") ;
	}
	return 0 ;
}
