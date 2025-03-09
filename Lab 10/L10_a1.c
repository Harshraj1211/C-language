#include<stdio.h>
void main()
{
    int number,ld,fd,i=0,a=1,tamp;

    printf("ENTER A NUMBER : ");
    scanf("%d",&number);
    tamp=number;
    ld=number%10;
    
    for(i=0 ; tamp>9 ; i++)
    {
        tamp=tamp/10;
    }

    fd=tamp%10;
    
    printf("%d\n",ld);
    printf("%d\n",fd);

    printf("sum : %d",ld+fd);
}