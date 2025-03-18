#include<stdio.h>
void main()
{
int sum=0,i=0,n;
    scanf("%d",&n);

int arr[n];
    for(i=0;i<n;i++)
    {
        printf("enter a 3 num");
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    float avg=(float)sum/n;
    int count=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]>avg)
        {
        count++;
        }

    }
    printf("sum=%d",sum);
    printf("avg %f",avg);
    printf("count %d",count);
}