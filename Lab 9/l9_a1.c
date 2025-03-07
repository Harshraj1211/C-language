#include<stdio.h>
void main()
{
    int i=1,sum=0,n,sum1=0,sum2=0;

    printf("enter a number = ");
    scanf("%d",&n);

    while(i<=n)
    {
        if(i%2==0)
        {
            sum1=sum1-i;
        }
        else if(i%2!=0)
        {
            sum2=sum2+i;
        }
        sum=sum1+sum2;
        i++;
    }

   
    printf("%d",sum);


}