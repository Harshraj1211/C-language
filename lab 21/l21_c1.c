// #include<stdio.h>
// void main()
// {
//     int f,i;

//     printf("INCHES : ");
//     scanf("%d",&i);

//     f=12*i;

//     printf("%d",f);
// 
// }

// #include<stdio.h>

// struct feet
// {
//     int inches;
// };
// void main()
// {
//     struct feet i;
//     printf("ENTER INCHES : ");
//     scanf("%d",&i.inches);
//     int f;
//     f = 12 * i.inches;
//     printf("FEETS : %d",f);
// }

#include<stdio.h>
struct feet
{
    int inches;
};

void main()
{
    struct feet i[2];

    for(int j=0 ; j<2 ; j++)
    {
        printf("ENTER INCHES %d : ",j+1);
        scanf("%d",&i[j].inches);
    }

    for(int j=0 ; j<2 ; j++)
    {
        printf("FEETS %d : %d\n",j+1,12*i[j].inches);
    }
}