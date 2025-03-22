#include<stdio.h>
void main()

{
    int rows,col;

    printf("ENTER ROWS :  ");
    scanf("%d",&rows);
    printf("ENTER COLLUMS :  ");
    scanf("%d",&col);

    int a[rows][col],i=0,j=0;

    for(i=0 ; i<rows ; i++)
    {   
        for(j=0 ; j<col ; j++)
        {
            printf("enter value : ");
            scanf("%d",&a[i][j]);
        }
        
    }


    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<col ; j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }

    int count=0,totalelements;

    totalelements=rows*col;

    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<col ; j++)
        {
            if(a[i][j]==0)
            {
                count++;
            }
        }
    }

    if(count>totalelements/2)
    {
        printf("GIVEN MATRIX IS SPARSE MATRIX.......");
    }
    else
    {
        printf("GIVEN MATRIX IS NOT SPARSE MATRIX.......");
    }
}