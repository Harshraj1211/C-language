#include<stdio.h>
void main()
{
    int number,i=1,square=0;
    
    printf("ENTER A NUMBER : ");
    scanf("%d",&number);

    for(i=0 ; i<=number ; i++)
    {
        square=number*number;
        i++;
    }
    printf("%d",square);
}