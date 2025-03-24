// #include<stdio.h>
// void main()
// {
//     int l=0;
//     char *ptr;

//     char s[100];

//     printf("ENTER STRING : ");
//     gets(s);

//     ptr=s;

//     while (*ptr != '\0')
//     {
//         l++;
//         ptr++;
//     }
//     printf("\nLENGTH OF STRING S IS  : %d",l);
// }
#include <stdio.h>

void sort(int *arr, int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (*(arr + i) > *(arr + j)) {
                temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    sort(arr, n);

    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
