#include<stdio.h>
void main()
{
    int i=0,sum=0,n,number;
    float avg;

    printf("ENTER N : ");
    scanf("%d",&n);

    for(i=1 ; i<=n ; i++)
    {
        printf("\n ENTER NUMBER %d : ",i);
        scanf("%d",&number);
        sum+=number;
    }
    printf("SUM = %d ",sum);
    printf("\n AVERAGE = %d",sum/n);
}