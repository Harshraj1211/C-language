#include<stdio.h>
void main()
{
    int n,i=0;

    printf("ENTER SIZE OF ARRAY A : ");
    scanf("%d",&n);

    int a[n];

    for(i=0 ; i<n ; i++)
    {
        printf("ENTER ELEMENTS OF ARRAY : ");
        scanf("%d",&a[i]);      
    }

    int j;


    for(j=n-1 ; j>=0 ; j--)
    {
        printf("ENTER REVERSE ARRAY : %d\n",a[j]);
    }
}