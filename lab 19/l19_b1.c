#include<stdio.h>
int power1(int base,int power);
void main()
{
    int base,power;

    printf("ENTER BASE : ");
    scanf("%d",&base);

    printf("ENTER POWER : ");
    scanf("%d",&power);

    power1(base,power);

}

int power1(int base,int power)
{
    if(power==0)
    {
        return 1;
    }
    else
    {
        return base*(power1(base,power-1));
    }
}