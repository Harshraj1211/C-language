#include<stdio.h>
void main()
{
    int number,i=1,sum=0;

    printf("ENTER A NUMBER : ");
    scanf("%d",&number);

    while(i<=number)
    {
        if(number%i==0)
        {
            sum=sum+i;
        }
        i++;
    }

    if(sum==number)
    {
        printf("GIVEN NUMBER IS PERFECT.......");
    }
    else
    {
        printf("GIVEN NUMBER IS NOT PERFECT.......");
    }
}