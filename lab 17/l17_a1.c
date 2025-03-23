#include<stdio.h>
void main()
{
    int n;

    printf("ENTER A NUMBER : ");
    scanf("%d",&n);
    
    int *ptr;

    ptr=&n;

    printf("%d  %d ",*ptr,ptr);
}