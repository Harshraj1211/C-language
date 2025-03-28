// #include<stdio.h>
// void main()
// {
//     int n,rev=0;

//     printf("ENTER A NUMBER : ");
//     scanf("%d",&n);

//     int i=0;

//     for(i=1 ; n!=0 ; i++)
//     {
//         int digit;
//         digit = n % 10;
//         rev = rev * 10 + digit;
//         n = n / 10;
//     }

//     printf("REVERSED NUMBER : %d ",rev);  

// }
// #include<stdio.h>
// void revers(int n,int rev);
// void main()
// {
//     int n,rev=0;

//     printf("ENTER A NUMBER : ");
//     scanf("%d",&n);

//     revers(n,rev);

// }
// void revers(int n,int rev)
// {
//     int i=0;

//     for(i=0 ; n!=0 ; i++)
//     {
//         int digit;
//         digit = n % 10;
//         rev = rev * 10 + digit;
//         n = n / 10;
//     }

//     printf("REVERSED NUMBER IS : %d",rev);
// }
#include<stdio.h>
int revers(int n,int rev);
int main()
{
    int n,rev=0;

    printf("ENTER A NUMBER : ");
    scanf("%d",&n);

    int h = revers(n,rev);

    printf("REVERSED NUMBER IS : %d",h);

}
int revers(int n,int rev)
{
    if(n==0)
    {
        return rev;
    }

    else
    {
        rev = rev * 10 + n % 10;
        return revers(n / 10,rev);
    }
}