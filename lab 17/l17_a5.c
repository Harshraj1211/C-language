#include<stdio.h>
void main()
{
    int size;

    printf("ENTER SIZE OF AN ARRAY A = ");
    scanf("%d",&size);

    int arr[size],i=0,j=0;

    for(i=0 ; i<size ; i++)
    {
        printf("ENTER ELEMENTS OF ARRAY A = ");
        scanf("%d",&arr[i]);
    }

    int *ptr=&arr[0];

    for(i=0 ; i<size ; i++)
    {
        printf("%d\n",*(ptr+i));
    }
}