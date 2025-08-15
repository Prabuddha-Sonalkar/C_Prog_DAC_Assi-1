#include <stdio.h>

int main() {
    int arr[50], n, i, j, temp;
    int *p;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // pointer to array
    p = arr;

    // simple bubble sort using pointer
    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(*(p + i) > *(p + j)) {
                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }

    printf("Sorted array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", *(p + i));
    }

    return 0;
}
