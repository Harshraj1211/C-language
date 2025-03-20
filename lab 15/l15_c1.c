#include<stdio.h>
void main()
{
    int a;

    printf("ENTER SIZE OF ARRAY : ");
    scanf("%d",&a);

    int arr[a],i=0;

    for(i=0 ; i<a ; i++)
    {
        printf("ENTER ELEMENTS : ");
        scanf("%d",&arr[i]);
    }

    int max,max2,j;

    max = arr[0];
    max = arr[1];

    for(i=0 ; i < a ; i++)
    {           
        for(j=i+1 ; j < a ; j++)
        {           
            if(max < arr[j])
            {
                 max = arr[j];
            }
            else if(max>arr[j] || max2<arr[j])
            {
                max2 = arr[j];
            }
        }
    }
    printf("LARGEST NUMBER OF THE ARRAY IS %d\n%d ",max,max2);

    

}