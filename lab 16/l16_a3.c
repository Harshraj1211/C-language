#include<stdio.h>
void main()
{
    int arr[20][2],i=0,j=0;

    for(i=0 ; i<20 ; i++)
    {
        for(j=0 ; j<2 ; j++)
        {
            printf("ENTER ROLL NUMBER OF STUDENT  : ");
            scanf("%d",&arr[i][j]);
            
        }
    }

    for(i=0 ; i<20 ; i++)
    {
        for(j=0 ; j<2 ; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}