#include<stdio.h>
#include<string.h>

struct book
{
    char tital[100];
    char author[100];
    char publication[100];
    int price;    
};

int main()
{
    struct book b[3];

    for(int i=1 ; i<=3 ; i++)
    {
        printf("FOR %d BOOK : %d\n",i);
        printf("ENTER BOOK %d TITAL : ",i);
        gets(b[i].tital);

        printf("ENTER BOOK %d'S AUTHOR : ",i);
        gets(b[i].author);

        printf("ENTER BOOK %d'S PUBLICATION : ",i);
        gets(b[i].publication);

        printf("ENTER BOOK %d'S PRICE : ",i);
        scanf("%d",&b[i].price);
    }

    for(int i=1 ; i<=3 ; i++)
    {
        puts(b[i].tital);
        puts(b[i].author);
        puts(b[i].publication);
        printf("%d",b[i].price);
    }
}