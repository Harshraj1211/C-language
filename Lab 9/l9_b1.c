#include<stdio.h>
void main()
{
    char c = 'A';
    printf("UPPER CASE: \n");

    while(c <= 'Z')
    {
        printf("%c  ", c);
        c++;
    }
    
    c = 'a';
    printf("\n lower case: \n");
    while(c <= 'z')
    {
        printf("%c  ", c);
        c++;
    }
    printf("\n");
}
