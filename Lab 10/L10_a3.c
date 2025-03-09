#include<stdio.h>
void main()
{
    int number,i=1,count=0;

    printf("ENTER A NUMBER : ");
    scanf("%d",&number);

    while(i<=number){
        if(number%i==0){
            count++;
        }
    i++;
    }
    if(count==2){
        printf("GIVEN NUMBER IS PRIME NUMBER.......");
    }
    else{
        printf("GIVEN NUMBER IN NOT PRIME NUMBER.......");
    }
}