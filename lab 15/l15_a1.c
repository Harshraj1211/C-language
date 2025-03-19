#include<stdio.h>
int main()
{   int rows;

    printf("ENTER VALUE OF ROWS : ");
    scanf("%d",&rows);

    int a[rows],b[rows],i=0;

    for(int i=0 ; i<rows ; i++)
    {   
        printf("ENTER ELEMENTS OF ARRAY A : ");
        scanf("%d",&a[i]);
        b[i] = a[i];
    }    
      for(i=0 ; i<rows ; i++)
    {
        printf("\n ELEMENTS OF ARRAY B : %d",b[i]);
    }      
}