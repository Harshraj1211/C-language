#include<stdio.h>
void main()
{
	int row=1,i=1,j=1;
	
	for(i=1 ; i<=5 ; i++)
	{
		for(j=1 ; j<=i ; j++)
		{
			printf(" %d ",j);
		}
		printf("\n");
	}
	
}
