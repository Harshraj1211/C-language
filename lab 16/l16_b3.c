#include<stdio.h>
void main()

{
    int n;

    printf("ENTER VALUE OF N : ");
    scanf("%d",&n);

    int i=0,j=0,a[n][n];

    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n ; j++)
        {
            printf("ENTER VALUE : ");
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("MATRIX A : \n");

    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n ; j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }

    int sum=0;

    for(i=0 ; i<n ; i++)
    {   printf(" %d ",a[i][i]);
        sum+=a[i][i];          
    }

    printf("\n SUM = %d",sum);

    
}