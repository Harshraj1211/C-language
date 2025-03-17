#include<stdio.h>
void main()
{
    int a[5],i=0,pc=0,nc=0,zc=0;

    printf("ENTER ELEMENTS OF ARRAY : ");

    for(i=0 ; i<=4 ; i++)
    {
        scanf("%d",&a[i]);
        
        if(a[i]>0)
        {
            pc++;
        }
        
        else if(a[i]<0)
        {
            nc++;
        }

        else if(a[i]==0)
        {
            zc++;
        }
    }
    printf("%d : %d : %d ",pc,nc,zc);
}