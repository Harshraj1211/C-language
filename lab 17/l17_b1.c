#include<stdio.h>
void main()
{
    int size;

    printf("ENTER SIZE OF ARRAY : ");
    scanf("%d",&size);
    
    int a[size],i=0;

    int b[size];

    for(i=1 ; i<=size ; i++)
    {
        printf("ENTER VALUE OF ELEMENT OF ARRAY A %d : ",i);
        scanf("%d",&a[i]);
    }

    int *ptr = a;
    
    int *ptr1 = b;

    for(i=1 ; i<=size ; i++)
    {
        *(ptr1 + i)=*(ptr + i);
    }

    for(i=1 ; i<=size ; i++)
    {
        printf("%d\n",b[i]);
    }
}