#include<stdio.h>
void main()
{
    int a[5],i=0,odd=0,even=0;

    printf("ENTER ELEMENTS OF ARRAY : ");

    for(i=0 ; i<=4 ; i++)
    {
        scanf("%d",&a[i]);
        
        if(a[i]%2==0)
        {
            even++;
        }
        
        else
        {
            odd++;
        }
 
    }
    printf("%d : %d  ",even,odd);


}