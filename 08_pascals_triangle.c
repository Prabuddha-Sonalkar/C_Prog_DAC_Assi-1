#include <stdio.h>

int main() {
    int rows, i, j;
    long long coeff;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = 0; i < rows; i++) {
        // print spaces
        for(j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }

        coeff = 1;
        for(j = 0; j <= i; j++) {
            printf("%lld ", coeff);
            coeff = coeff * (i - j) / (j + 1); // next coefficient
        }
        printf("\n");
    }

    return 0;
}
