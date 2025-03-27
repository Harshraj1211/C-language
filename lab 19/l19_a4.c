// #include<stdio.h>
// void main()
// {
//     char s[100];

//     printf("ENTER A STRING : ");
//     gets(s);

//     char n;
//     int i=0;

//     printf("ENTER A CHARACTER YOU WONT TO FIND IN STRING S : ");
//     scanf("%c",&n);

//     for(i=0 ; s[i]!='\0' ; i++)
//     {
//         if(s[i]==n)
//         {
//             
//             printf("CHARACTER FOUNT %c ON POSITION %d.",n,i+1);
//             break;
//         }
//     }
//     if(!f)
//     {
//         printf("GIVEN CHARACTER IS NOT IN STRING S.");
//     }
// }
#include<string.h>
void findchar(char s[100],char n);
void main()
{
    char s[100],n;
    int f=0,i=0;

    printf("ENTER A STRING : ");
    gets(s);

    printf("ENTER A CHARACTER YOU WONT TO FIND IN STRING S : ");
    scanf("%c",&n);

    findchar(s,n);

}
void findchar(char s[100],char n)
{   
    for(int i=0 ; s[i]!='0' ; i++)
    {
        if(s[i]==n)
        {   
            printf("CHARACTER FOUNDED %c AT POSITION %d.",n,i);
            return;
        }
    }

    if(!n)
    {
        printf("GIVEN CHARACTER IN NOT FOUND IN STRING S.");
    }
}