// Delete all duplicate elements from an array
#include<stdio.h>
void main()
{
    int n;

    printf("ENTER SIZE OF ARRAY A : ");
    scanf("%d",&n);

    int a[n],i=0,j=0,k=0;

    for(i=0 ; i<n ; i++)
    {
        printf("ENTER ELEMENTS OF ARRAY A : ");
        scanf("%d",&a[i]);
    }

    for(i=0 ; i<=n-1 ; i++)
    {               
        for(j=i+1 ; j<n ; j++)
        {
            if(a[i]==a[j])
            {
                for(k=j ; k<n-1 ; k++)
                {
                    a[k]=a[k+1];
                }
                n--;
            }
            else
            {
                j++;
            }
        }
    }   

    printf("ARRAY AFTER DELETING DUPLICATES : ");
    for(i=0 ; i<n ; i++)
    {
    printf("%d ",a[i]);
    }
    printf("\n");
}