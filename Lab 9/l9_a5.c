#include<stdio.h>
void main()
{
    int i=1,number;


    printf("Enter the number = ");
    scanf("%d",&number);


    
    while(i<=number)
    {
        if(number%i==0)
        {
            printf("%d",i);
        }
        i++;
    }
    printf("\n");

}