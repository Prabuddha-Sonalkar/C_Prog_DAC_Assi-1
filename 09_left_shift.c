#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int shifted = num << 2;  // shift left by 2 bits

    printf("After shifting left by 2 bits: %d\n", shifted);

    return 0;
}
