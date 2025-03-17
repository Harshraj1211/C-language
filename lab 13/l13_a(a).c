#include<stdio.h>
void main()
{
    int rows=0,i=1,j=1;

    printf("ENTER NUMBER OF ROWS : ");
    scanf("%d",&rows);

    for(i=1 ; i<=rows ; i++)
    {
        for(j=5 ; j>=i ; j--)
        {
            printf(" * ");
        }
        printf("\n");
    }
}