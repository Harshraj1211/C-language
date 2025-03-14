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
        a=a*10;
    }

    fd=tamp%10;
    
    number=number-ld;
    number=number+fd;
    number=number-(fd*a);
    number=number+(ld*a);

    printf("%d",ld);
    printf("\n %d",fd);

    printf("\n NUMBER = %d",number);
}