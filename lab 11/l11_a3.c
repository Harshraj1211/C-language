#include<stdio.h>
void main()
{
    int number,i=1;

    printf("ENTER A NUMBER : ");
    scanf("%d",&number);

    for(i=1 ; i<=10 ; i++)
    {
        printf("%d\n",number*i);
    }
}