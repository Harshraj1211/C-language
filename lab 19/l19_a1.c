// #include<stdio.h>
// void main()
// {
//     int number,i=0,factorial=1;

//     printf("ENTER A NUMBER : ");
//     scanf("%d",&number);

//     for(i=number ; i>0 ; i--)
//     {
//         factorial=factorial*i;
//     }

//     printf("ENTER FACTORIAL OF GIVE NUMBER : %d",factorial);
// }
#include<stdio.h>
int fact(int n);
void main()
{
    int n,f;

    printf("ENTER A NUMBER : ");
    scanf("%d",&n);

    f = fact(n);
    printf("%d",f);
}

int fact(int n)
{   
    int f=1;
    for(int i = n ; i > 0 ; i--)
    {
        f=f*i;
    }
    return f;
}