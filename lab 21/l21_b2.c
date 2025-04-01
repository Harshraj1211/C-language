// #include<stdio.h>
// void main()
// {
//     char s1[100],temp[100];

//     printf("ENTER A STRING : ");
//     scanf("%[^\n]s",s1);

//     int i=0;

//     for(i=1 ; i<=100 ; i++)
//     {
//         if((s1[i] >= 'A' && s1[i] <= 'Z') || (s1[i] >= 'a' && s1[i] <= 'z'))
//         {
//             printf("%s",s1[i]);
//         }
//     }

// }
#include<stdio.h>
#include<string.h>
struct priceincountry
{
    int india;
    int europ;
    int asia;
};
struct book
{
    char title[100];
    int page;
    struct priceincountry p;
};
void main()
{
    struct book b1;

    printf("ENTER TITLE OF THE BOOK : ");
    scanf("%[^\n]s",b1.title);

    printf("ENTER PAGES OF THE BOOK : ");
    scanf("%d",&b1.page);

    printf("ENTER PRICE OF THE BOOK IN INDIA : ");
    scanf("%d",&b1.p.india);

    printf("ENTER PRICE OF THE BOOK IN EUROP : ");
    scanf("%d",&b1.p.europ);

    printf("ENTER PRICE OF THE BOOK IN ASIA : ");
    scanf("%d",&b1.p.asia);
    
    printf("\n TITLE OF THE BOOK : %s",b1.title);
    printf("\n PAGES OF THE BOOK : %d",b1.page);
    printf("\n PRICE OF THE BOOK IN INDIA : %d",b1.p.india);
    printf("\n PRICE OF THE BOOK IN EUROP : %d",b1.p.europ);
    printf("\n PRICE OF THE BOOK IN ASIA : %d",b1.p.asia);
}