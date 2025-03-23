#include<stdio.h>
void main()
{
    int n1,n2;

    printf("\tENTER NUMBER 1 : ");
    scanf("%d",&n1);

    printf("\n\tENTER NUMBER 2 : ");
    scanf("%d",&n2);

    int *ptr1=&n1,*ptr2=&n2;

    printf("\tSUM = %d",*ptr1+*ptr2);    

}
