#include<stdio.h>
void main()
{
    int i,j,count=0;

    int arr[5]={1,2,3,2,4};

    for(i=0 ; i<5 ; i++)
    {
        for(j=i+1 ; j<5 ; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                break;
            }

        }
    }
    printf("%d",count);

}