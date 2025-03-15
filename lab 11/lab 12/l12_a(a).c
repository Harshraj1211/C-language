#include<stdio.h>
void main()
{
	int i=1,j=1,row=1;
	printf("ROWS  : ");
	scanf("%d",&row);
	for(i=1 ; i<=row ; i++)
	{
		for(j=1 ; j<=i ; j++)
		{
			printf(" * ");
		}
		printf("\n");
	}	
}