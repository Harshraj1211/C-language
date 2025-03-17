#include<stdio.h>
void main()
{
    int a[5],i=0;
    
    printf(" ENTE THE ELEMENT OF ARRAY : ");

    for(i=0 ; i<=4 ; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("REVERSE ARRAY ELEMENTS : ");

    for(i=4 ; i>=0 ; i--)
    {
        printf("%d \n",a[i]);
    }
}