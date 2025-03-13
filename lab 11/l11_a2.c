#include<stdio.h>
void main()
{
    int i=1,sum=0,number;

    printf("ENTER A NUMBER : ");
    scanf("%d",&number);

    for(i=0 ; i<=number ; i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
}