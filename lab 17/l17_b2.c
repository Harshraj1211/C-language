#include<stdio.h>
void main()
{
    int size;

    printf("ENTER SIZE OF ARRAY : ");
    scanf("%d",&size);

    int a[size],b[size],i=0,j=0;

    for(i=0 ; i<size ; i++)
    {
        printf("ENTER ELEMENTS OF ARRAY A %d : ",i+1);
        scanf("%d",&a[i]);
    }

    for(i=0 ; i<size ; i++)
    {
        printf("ENTER ELEMENTS OF ARRAY B %d : ",i+1);
        scanf("%d",&b[i]);
    }

    int *ptr=a;
    int *ptr1=b;
    int tamp;

    for(i=0 ; i<size ; i++)
    {   
        tamp=*(ptr+i);
        *(ptr+i)=*(ptr1+i);
        *(ptr1+i)=tamp;
    }

    printf("AFTER SWAP A : ");
    for(i=0 ; i<size ; i++)
    {
        printf(" %d ",a[i]);
    }
    printf("\n");

    printf("AFTER SWAP B : ");
    for(i=0 ; i<size ; i++)
    {
        printf(" %d ",b[i]);
    }
}