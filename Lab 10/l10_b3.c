#include<stdio.h>
void main()
{
    int number,i=0,a,reversed;

    printf("ENTER THE NUMBER : ");
    scanf("%d",&number);
    int temp=number;
    // for(i=1 ; number!=0 ; i++)
    // {
    //     a = number % 10;
    //     reversed=reversed * 10 + a;
    //     number /= 10;
    // }

    for(i= 1 ; number!=0 ; i++)
    {
        int a=number%10;
        reversed=reversed*10+a;
        number/=10;
        // printf("%d",reversed);
    }

    printf("REVERSED NUMBER IS : %d",reversed);
    number=temp;

    if(reversed == number)
    {
        printf("\n GIVEN NUMBER IS PALINDROME.......");
    }
    else
    {
        printf("\n GIVEN NUMBER IS NOT PALINDROME.......");
    }
}