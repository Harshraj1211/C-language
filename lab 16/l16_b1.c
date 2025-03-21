#include<stdio.h>
void main()
{
    int rows,col;

    printf("ENTER ROWS : ");
    scanf("%d",&rows);

    printf("ENTER COLLUMS : ");
    scanf("%d",&col);

    int arr[rows][col],i=0,j=0;

    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<col ; j++)
        {
            printf("ENTER VALUE : ");
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<col ; j++)
        {
            printf(" %d ",arr[i][j]);
        }
        printf("\n");
    }

    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<col ; j++)
        {
            printf(" %d ",arr[j][i]);
        }
        printf("\n");
    }
}