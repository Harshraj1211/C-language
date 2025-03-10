#include<stdio.h>
void main()
{
    int number,i=0,digit;

    printf("ENTER A NUMBER : ");
    scanf("%d",&number);

    if(number < 0)
    {
        number=-number;
    }

    while(number > 0)
    {
        digit = number%10;
        number=number/10;
        printf("%d",digit);
        i++;
    }
    printf("\n");
}