#include<stdio.h>
void main()
{
    int size,i=0;

    printf("ENTER SIZE OF ARRAY A : ");
    scanf("%d",&size);

    int a[size];
                                                                                                
    for(i=1 ; i<=size ; i++)
    {
        printf("ENTER ELEMENT OF ARRAY A %d : ",i);
        scanf("%d",&a[i]);
    }

    int s;

    printf("ENTER AN ELEMENT :  ");
    scanf("%d",&s);

    for(i=0 ; i<=size ; i++)
    {
        if(a[i]==s)
        {
            printf("RESULT OF THE SEARCH BY USER : %d ",a[i]);
        }
        else
        {
            printf("VALUE OF SEARCH IS NOT IN ARRAY A");
        }
    }
}