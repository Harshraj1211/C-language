#include<stdio.h>
void main()
{
    int number,i=0;
    printf("Enter the number : ");
    scanf("%d",&number);
    char *words[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    int digits[10];
    while(number>0)
    {
        digits[i]=number%10;
        number=number/10;
        i++;
    }
    int j=0;
    for(j=i-1 ; j>=0 ; j--)
    {
        printf("%s\n",words[digits[j]]);
    }
}