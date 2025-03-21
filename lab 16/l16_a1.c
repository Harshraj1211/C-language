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
}