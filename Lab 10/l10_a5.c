#include<stdio.h>
void main()
{
    int number,reversed=0,a=1;

    printf("ENTER A NUMBER : ");
    scanf("%d",&number);

    while(number > 9)
    {
        a = number % 10;
        reversed=reversed * 10 + a;
        number /= 10;
    }
    printf("REVERSED NUMBER : %d",reversed);
}