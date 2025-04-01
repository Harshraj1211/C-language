#include<stdio.h>
struct book
{
    int page;
    int price;
    char title[100];
};

void main()
{
    struct book b1;
    
    struct book *ptr;

    ptr=&b1;

    printf("ENTER TITLE :");
    gets(ptr->title);

    printf("ENTER PRICE : ");
    scanf("%d",&(ptr->price));

    printf("ENTER PAGES : ");
    scanf("%d",&(ptr->page));

    printf("TITLE : %s\n",ptr->title);

    printf("PRICE : %d\n",ptr->price);

    printf("PAGES : %d\n",ptr->page); 
}
