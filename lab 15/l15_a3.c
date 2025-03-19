#include<stdio.h>
void main()
{
    int size,i=0;

    printf("ENTER SIZE OF ARRAY A : ");
    scanf("%d",&size);

    int a[size];
  
    for(i=1 ; i<=size ; i++)
    {   
        printf("ENTER ELEMENTS Of ARRAY A %d : ",i);
        scanf("%d",&a[i]);
    }

    for(i=1 ; i<=size ; i++)
    {
        if(a[i]%3==0)
        {
            printf("\n ELEMENT OF ARRAY A IS %d WHICH IS DIVISIBLE BY 3",a[i]);
        }
    }
}