#include <stdio.h>

void main() {
    int n, val, count = 0;
    
    printf("ENTER NUMBER OF ELEMENTS IN THE ARRAY: ");
    scanf("%d", &n);

    int nums[n];

    printf("ENTER ELEMENTS OF ARRAY:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("ENTER VALUE TO REMOVE: ");
    scanf("%d", &val);

    // Remove occurrences of val
    for (int i = 0; i < n; i++) {
        if (nums[i] != val) {
            nums[count++] = nums[i];
        }
    }

    printf("NUMBER OF ELEMENTS AFTER REMOVAL: %d\n", count);
    printf("ARRAY AFTER REMOVAL:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
}
