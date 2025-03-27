// #include<stdio.h>
// void main()
// {
//     int size,i=0;

//     printf("ENTER SIZE OF ARRAY A : ");
//     scanf("%d",&size);

//     int a[size];

//     for(i=0 ; i<size ; i++)
//     {
//         printf("ENTER AN ELEMENT OF ARRAY A %d : ",i+1);
//         scanf("%d",&a[i]);
//     }

//     for(i=0 ; i<size ; i++)
//     {
//         printf("%d\n",a[i]);
//     }
// }
#include<stdio.h>
void r(int a[],int s);
void main()
{
    int s;

    printf("ENTER SIZE OF ARRAY A : ");
    scanf("%d",&s);

    int a[s];

    for(int i=0 ; i<s ; i++)
    {
        printf("ENTER ELEMENTS OF ARRAY A %d : ",i+1);
        scanf("%d",&a[i]);
    }

    r(a,s);
}
void r(int a[],int s)
{
    for(int i=0 ; i<s ; i++)
    {
        printf("%d\n",a[i]);
    }
}