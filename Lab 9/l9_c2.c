#include<stdio.h>
void main()
{
    int n,digit[32];

    printf("ENTER A DECIMAL NUMBER : ");
    scanf("%d",&n);

    int i=0,j=0;

    if(n==0)
    {
        printf("0\n");
        return 0;
    }

    while(n>0)
    {
        digit[i] = n % 2;
        n = n / 2;
        i++;
    }

    printf("The binary equivalent is : ");

    for(j=i-1 ; j>=0 ; j--)
    {
        printf("%d",digit[j]);
    }


}