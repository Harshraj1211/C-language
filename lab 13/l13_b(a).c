#include<stdio.h>
void main()
{
    int rows=1,i=1,j=1,a=1;

    printf("ENTER NUMBER OF ROWS : ");
    scanf("%d",&rows);

    for(i=1 ; i<=rows ; i++)
    {   
        for(j=1 ; j<=i ; j++)
        {
            printf("%d  ",a);
            a++;
        }
        printf("\n");
    }
}