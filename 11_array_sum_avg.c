#include <stdio.h>

int main() {
    int arr[10], i, sum = 0;
    float avg;

    printf("Enter 10 elements:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    avg = sum / 10.0;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}
