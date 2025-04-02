// #include <stdio.h>
// struct time 
// {
//     int hours;
//     int min;
//     int sec;
// };
// int main() {
//     struct time t1[2];
//     for (int i = 0; i < 2; i++) {
//         printf("ENTER HOURS FOR T%d: ", i + 1);
//         scanf("%d", &t1[i].hours);

//         printf("ENTER MINUTES FOR T%d: ", i + 1);
//         scanf("%d", &t1[i].min);

//         printf("ENTER SECONDS FOR T%d: ", i + 1);
//         scanf("%d", &t1[i].sec);
//     }
//     for (int i = 0; i < 2; i++) {
//         printf("T%d = %02d:%02d:%02d\n", i + 1, t1[i].hours, t1[i].min, t1[i].sec);
//     }
//     return 0;
// }
#include<stdio.h>
struct time
{
    int hours;
    int min;
    int sec;
};

int main()
{
    struct time t1[2];

    for(int i=0 ; i<2 ; i++)
    {
        printf("ENTER HOURS FOR T%d : ",i+1);
        scanf("%d",&t1[i].hours);

        printf("ENTER MININUTS FOR T%d : ",i+1);
        scanf("%d",&t1[i].min);

        printf("ENTER SECONDS FOR T%d : ",i+1);
        scanf("%d",&t1[i].sec);
    }

    for(int i=0 ; i<2 ; i++)
    {
        printf("T%d = %0d:%02d:%02d\n", i+1, t1[i].hours, t1[i].min, t1[i].sec);
    }

   
}