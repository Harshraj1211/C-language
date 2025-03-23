#include<stdio.h>
void main()
{
    int n1,n2;

    printf("ENTER NUMBER 1 : ");
    scanf("%d",&n1);

    printf("ENTER NUMBER 2 : ");
    scanf("%d",&n2);

    int *ptr1=&n1,*ptr2=&n2;

    int tamp;

    tamp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=tamp;

    printf(" AFTER SWAPING NUMBER 1 = %d \n",*ptr1);
    printf(" AFTER SWAPING NUMBER 2 = %d ",*ptr2);

}