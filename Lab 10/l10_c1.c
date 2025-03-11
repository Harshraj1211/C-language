#include<stdio.h>
void main()
{
    int number,c,arm=0,r=0;

    printf("ENTER THE NUMBER : ");
    scanf("%d",&number);

    c = number;

    // int digit,count=0;
    // while(number>0)
    // {
    //     digit%=10;
    //     number/=10;
    //     count++;
    // }

    // printf("TOTAL DIGITS IN TO THE NUMBER : %d",count);
    
    while(number > 0)
    {   
        r=number%10;
        // for(i=1 ; i<=count ; i++)
        // {
        //     arm+=r*r;  
        // }    
        arm = (r * r * r) + arm;
        number/=10;
    }
     
    if(c == arm)
    {
        printf("GIVEN NUMBER IS ARMSTRONG.......");
    }
    else
    {
        printf("GIVEN NUMBER IS NOT ARMSTRONG.......");
    }
}