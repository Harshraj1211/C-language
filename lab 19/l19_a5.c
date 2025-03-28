// #include<stdio.h>
// void main()
// {
//     char s[100],oldchar,newchar;

//     printf("ENTER A STRING S : ");
//     gets(s);

//     printf("ENTER OLD CHARACTER : ");
//     scanf(" %c",&oldchar);

//     printf("ENTER NEW CHARACTER WHICH REPLACE OLD CHARACTER :");
//     scanf(" %c",&newchar);

//     int i;

//     for(i=0 ; s[i]!='\0' ; i++)
//     {
//         if(s[i]==oldchar)
//         {
//             s[i]=newchar;
//         }
//     } 

//     printf("NEW STRING IS : %s\n",s);
// }
#include<stdio.h>
void main()
{
    char s[100],oldchar,newchar;

    printf("ENTER A STRING : ");
    gets(s);

    printf("ENTER AN OLD CHARACTER : ");
    scanf(" %c",&oldchar);

    printf("ENTER A NEW CHARACTER WHICH WILL BE REPLACE BY NEW CHARACTER : ");
    scanf(" %c",&newchar);

    replace(s,oldchar,newchar);

}

void replace(char s[100],char oldchar,char newchar)
{
    int i=0;

    for(i=0 ; s[i]!='\0' ; i++)
    {
        if(s[i]==oldchar)
        {
            s[i]=newchar;
        }
    }

    printf("NEW STRING IS : %s\n",s);
}