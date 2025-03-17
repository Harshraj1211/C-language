#include<stdio.h>
void main()
{
    int rows=0,i=1,j=1;

    printf("ENTER NUMBER OF ROWS : ");
    scanf("%d",&rows);

    for(i=1 ; i<=rows ; i++)
    {
        for(j=1 ; j<=rows-i+1 ; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }


}