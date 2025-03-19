#include<stdio.h>
void main()
{
    int i=0,a[5],negcount=0;

    printf("ENTER ELEMENTS OF ARRAY A : ");

    for(i=0 ; i<5 ; i++)
    {   printf("ENTER ELEMENTS OF ARRAY A %d: ",i);
        scanf("%d",&a[i]);
    }

    for(i=0 ; i<5 ; i++)
    {
        if(a[i] < 0)
        {
            negcount++;
        }
    }
    printf("TOTAL NUMBER OF NEGATIVE ELEMENTS IN ARRAY A IS %d ",negcount);
}