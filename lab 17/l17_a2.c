#include<stdio.h>
void main()
{
    int n1;
    printf("ENTER A NUMBER : ");
    scanf("%d",&n1);
    
    int *ptr;

    ptr=&n1;

    float n2;

    printf("ENTER A NUMBER : ");
    scanf("%f",&n2);

    float *ptr1=&n2;

    ptr1=&n2;

    char c='H';
    char *ptr2;
    ptr2=&c;

    double d=100;

    double *ptr3;
    ptr3=&d;

    printf("%d %f %c %lf",*ptr,*ptr1,*ptr2,*ptr3);

}