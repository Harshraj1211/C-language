#include<stdio.h>
void main()
{
    int n,i,j;

    printf("ENTER NUMBER OF ROWS : ");
    scanf("%d",&n);

    for(i=1 ; i<=5 ; i++)
    {
        for(j=5 ; j>=i ; j--)
        {
            printf(" * ");
        }
        printf("\n");
    }
}