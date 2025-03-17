#include<stdio.h>
void main()
{
    int i=0,j=0,n;

    printf("ENTER A NUMBER : ");
    scanf("%d",&n);
    int a=0;
    for(i=0 ; i<=n ; i++)
    {   
        for(j=0 ; j<=i ; j++)
        {               
            if(a==1)
            {
                a=0;
            }   

            else
            {
                a=1;
            }

            printf(" %d ",a);

            
        }
        printf("\n");
    }
}