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
            printf("enter value A : ");
            scanf("%d",&a[i][j]);
        }
    }

    int b[rows][col];
    for(i=0 ; i<rows ; i++)
    {   
        for(j=0 ; j<col ; j++)
        {
            printf("enter value B : ");
            scanf("%d",&b[i][j]);
        }
        
    }
    printf("MATRIX A : \n");
    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<col ; j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
    printf("MATRIX B : \n");
    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<col ; j++)
        {
            printf(" %d ",b[i][j]);
        }
        printf("\n");
    }

    int sum[rows][col];
    printf("MATRIX OF SUM  : \n");
    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<col ; j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
            printf(" %d ",sum[i][j]);    
        }
        printf("\n");
    }
}