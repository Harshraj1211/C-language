#include<stdio.h>
void main()
{
    int i=0,h[5],w[5],count=0;

    for(i=0 ; i<=4 ; i++)
    {   
        printf("enter hight %d : ",i+1);
        scanf("%d  ",&h[i]);
        printf("enter weight %d : ",i+1);
        scanf("%d  ",&w[i]);
    }
    
    for(i=0 ; i<=4 ; i++)
    {
        if(h[i] > 170 && w[i] < 50 )
        {
            count++;
        }
    }
    printf("%d",count);
}