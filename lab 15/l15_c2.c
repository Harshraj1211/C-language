#include<stdio.h>
void main()
{
    int a[5],i=0,j=0,tamp;

    for(i=0 ; i<5 ; i++)
    {
        printf("ENTER ELEMENTS : ");
        scanf("%d",&a[i]);
    }
    
    for(i=0 ; i<5 ; i++)
    {
        for(j=0 ; j<5 ; j++)
        {
            if(a[i] > a[j])
            {
                tamp=a[i];
                a[i]=a[j];
                a[j]=tamp;
            }
        }
    }
    printf("ENTER RETURN ELMENTS : ");
    for(i=0 ; i<5 ; i++)
    {
        printf("%d",a[i]);
    }
} 