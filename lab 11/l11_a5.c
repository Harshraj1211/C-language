#include<stdio.h>
void main()
{
    int i=1,n,a=1;

    printf("enter a number = ");
    scanf("%d",&n);

    for(i=1 ; i<=n ; i++)
    {
        a=a*i;
    }

    printf("%d",a);
}