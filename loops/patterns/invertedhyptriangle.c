// Program to print the inverted hypotenues triangle
#include<stdio.h>
int main()
{
	int num ;
	printf("Enter the number to print the pattern:") ;
	scanf("%d",&num);
	for(int i=0;i<num;i++)
	{
		for(int j=0;j<=num-i-1;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
