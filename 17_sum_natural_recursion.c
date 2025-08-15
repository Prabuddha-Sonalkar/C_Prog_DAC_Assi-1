#include <stdio.h>

// recursive function
int sumNatural(int n) {
    if(n == 0)
        return 0;
    else
        return n + sumNatural(n - 1);
}

int main() {
    int n;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    printf("Sum of natural numbers = %d\n", sumNatural(n));

    return 0;
}
