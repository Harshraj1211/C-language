#include<stdio.h>
void main()
{
    int rows1,col1;

    printf("ENTER SIZE OF ROWS : ");
    scanf("%d",&rows1);

    printf("ENTER SIZE OF COLLUMS : ");
    scanf("%d",&col1);

    int a[rows1][col1],i=0,j=0;

    for(i=0 ; i<rows1 ; i++)
    {   
        for(j=0 ; j<col1 ; j++)
        {
        printf("ENTER ELEMENTS OF ARRAY A : ");
        scanf("%d",&a[i][j]);
        }
    }

    int rows2,col2;

    printf("ENTER SIZE OF ROWS : ");
    scanf("%d",&rows2);

    printf("ENTER SIZE OF COLLUMS : ");
    scanf("%d",&col2);

    int b[rows2][col2];

    for(i=0 ; i<rows2 ; i++)
    {   
        for(j=0 ; j<col2 ; j++)
        {
        printf("ENTER ELEMENTS OF ARRAY B : ");
        scanf("%d",&b[i][j]);
        }
    }
    
    printf("MATRIX A : \n");

     for(i=0 ; i<rows1 ; i++)
    {
        for(j=0 ; j<col1 ; j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }

    printf("MATRIX B : \n");

    for(i=0 ; i<rows2 ; i++)
    {
        for(j=0 ; j<col2 ; j++)
        {
            printf(" %d ",b[i][j]);
        }
        printf("\n");
    }
     

    printf("MULTIPLICATION OF MATRIX A & B IS : \n");

    for(i=0 ; i<rows1 ; i++)
    {   
        for(j=0 ; j<col2 ; j++)
        {  
            int sum=0,c=0;
            for(c=0 ; c<rows1 ; c++)
            {   
                sum+=a[c][j]*b[i][c];
            }
            printf("%d ",sum);            
        }
        printf("\n");
    }
}