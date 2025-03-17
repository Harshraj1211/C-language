#include<stdio.h>
int main()
{
    int i=0,a[5],sum=0,max=a[0],min=a[0];

    float avg=0;

    printf("ENTER ELEMENTS OD ARRAY : ");
    max=a[0];
    min=a[0];
    for(i=0 ; i<=4 ; i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];

        if(a[i] > max)
        {   
            max = a[i];                  
        }
        if (a[i] < min) 
        {
            min = a[i];
        }
    }
    avg=sum/5;
    printf("\n sum = %d",sum);
    printf("\n average = %f",avg);
    printf("\n max = %d",max);
    printf("\n min = %d",min);
}