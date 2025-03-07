#include<stdio.h>
void main()
{
    int i=1,n,a=1;

    printf("enter a number = ");
    scanf("%d",&n);

    while(i<=n)
    {
        a=a*i;
        i++;
    }

    printf("%d",a);
}