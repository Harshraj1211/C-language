#include<stdio.h>
#include<string.h>
void main()
{
    char s1[100];

    printf("ENTER : ");
    gets(s1);

    puts(s1);

    int length=strlen(s1);

    printf("%d",length);

}