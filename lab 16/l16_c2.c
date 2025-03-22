#include<stdio.h>
void main()
{
    int rows,col;

    printf("ENTER VALUE OF ROWS : ");
    scanf("%d",&rows);

    printf("ENTER VALUE OF COLLUMS : ");
    scanf("%d",&col);

    int arr[rows][col],i=0,j=0;

    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<col ; j++)
        {
            printf("ENTER ELEMENTS OF ARRAY : ");
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<col ; j++)
        {  
            if(j<i)
            { 
                printf(" 0 ");
            }
            else
            {
                printf(" %d ",arr[i][j]);
            }
        }
        printf("\n");
    }
}