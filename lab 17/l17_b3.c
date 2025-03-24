#include<stdio.h>
void main()
{
    int rows,col;

    printf("ENTER VALUE OF ROWS : ");
    scanf("%d",&rows);

    printf("ENTER VALUE OF COLLUMNS : ");
    scanf("%d",&col);

    int a[rows][col],b[rows][col],c[rows][col];

    int i=0,j=0;

    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<col ; j++)
        {   
            printf("ENTER ELEMENTS OF MATRIX A : ");
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<col ; j++)
        {
            printf("ENTER ELEMENTS OF MATRIX B : ");
            scanf("%d",&b[i][j]);
        }
        printf("\n");
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

    int *ptr=a;
    int *ptr1=b;
    int *ptr2=c;

    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<col ; j++)
        {
            *(*(c + i) + j) = *(*(a + i) + j) + *(*(b + i) + j);
        }
    }

    printf("SUM OF MATRIX : \n");

    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<col ; j++)
        {
            printf(" %d ",*(*(c + i) + j));
        }
        printf("\n");
    }
}