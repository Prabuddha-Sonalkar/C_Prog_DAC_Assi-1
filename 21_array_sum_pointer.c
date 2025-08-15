#include <stdio.h>

int main() {
    int arr[50], n, i, sum = 0;
    int *p;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    p = arr;  

    for(i = 0; i < n; i++) {
        sum = sum + *(p + i);
    }

    printf("Sum of all elements = %d\n", sum);

    return 0;
}
