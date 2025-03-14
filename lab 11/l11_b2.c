// #include<stdio.h>
// void main()
// {
//     int number;
//     printf("ENTER A NUMBER : ");
//     scanf("%d",&number);

//     int i=0,n,count=0;

//     for(i=0 ; i<number ; i++)
//     {
//         number=number/10;
//         count++;
//     }
//     printf("%d",number);
// }
#include <stdio.h>

void count_digit_frequency(int num) {
    int digit, frequency[10] = {0};

    if (num < 0) {
        num = -num; // Handle negative numbers
    }

    while (num > 0) {
        digit = num % 10;
        frequency[digit]++;
        num /= 10;
    }

    printf("Digit frequencies:\n");
    for (int i = 0; i < 10; i++) {
        if (frequency[i] != 0) {
            printf("Digit %d: %d times\n", i, frequency[i]);
        }
    }
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    count_digit_frequency(num);

    return 0;
}
