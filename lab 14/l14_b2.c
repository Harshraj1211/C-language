#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    float product = 1.0;
    float reciprocalSum = 0.0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
        product *= arr[i];
        reciprocalSum += 1.0 / arr[i];
    }

    float average = (float)sum / n;
    float geometricMean = pow(product, 1.0 / n);
    float harmonicMean = n / reciprocalSum;

    printf("Average: %.2f\n", average);
    printf("Geometric Mean: %.2f\n", geometricMean);
    printf("Harmonic Mean: %.2f\n", harmonicMean);

    return 0;
}