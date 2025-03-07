#include<stdio.h>
void main()
{
    int base,power;

    printf("ENTER A BASE : ");
    scanf("%d",&base);
    printf("ENTER POWER : ");
    scanf("%d",&power);

    int i=1,result=1;

    while(i<=power)
    {
        result*=base;
        i++;
    }
    printf("ANSWER IS : %d",result);
}