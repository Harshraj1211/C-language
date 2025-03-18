#include<stdio.h>
void main()
{
    int n,i=0;

    printf("ENTER SIZE OF ARRAY A : ");
    scanf("%d",&n);

    int a[n];

    for(i=0 ; i<n ; i++)
    {
        printf("ENTER ELEMENTS OF ARRAY A : ");
        scanf("%d",&a[i]);
    }

    int f;
    printf("ENTER SIZE OF ARRAY B : ");
    scanf("%d",&f);


    int b[f],tamp,count=0,j=0;
    for(j=0 ; j<f ; j++)
    {
        printf("ENTER ELEMENTS OF ARRAY B : ");
        scanf("%d",&b[j]);
    }

    for(i=0 ; i<n ; i++)
    {   
        tamp=a[i];
        count=0;
        for(j=0 ; j<f ; j++)
        {
                     
            if( a[i]==b[j])
            {
                count++;
            }
        }
        if(count==0)
        {
            printf("%d\n",a[i]);
        }
    }   
}