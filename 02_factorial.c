#include <stdio.h>

int main() {
    int n, i = 1;
    long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    // factorial using do while
    do {
        fact = fact * i;
        i++;
    } while(i <= n);

    printf("Factorial = %ld", fact);

    return 0;
}
