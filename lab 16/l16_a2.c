#include<stdio.h>
void main()
{   
    int rows,col;

    printf("ENTER ROWS :  ");
    scanf("%d",&rows);
    printf("ENTER COLLUMS :  ");
    scanf("%d",&col);

    int a[rows][col],i=0,j=0,pv=0,nv=0,zv=0;

    for(i=0 ; i<rows ; i++)
    {   
        for(j=0 ; j<col ; j++)
        {
            printf("enter value : ");
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<col ; j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }

    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<col ; j++)
        {
            if(a[i][j]>0)
            {
                pv++;
            }

            else if(a[i][j]<0)
            {
                nv++;
            }

            else if(a[i][j]==0)
            {
                zv++;
            }
        }
    }
    printf("PV = %d\n",pv);
    printf("NV = %d\n",nv);
    printf("ZV = %d",zv);
}        

