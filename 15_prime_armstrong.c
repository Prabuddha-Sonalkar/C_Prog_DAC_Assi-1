#include <stdio.h>

// function to check prime
int isPrime(int n) {
    int i;
    if(n <= 1)
        return 0;
    for(i = 2; i <= n/2; i++) {
        if(n % i == 0)
            return 0;
    }
    return 1;
}

// function to check armstrong
int isArmstrong(int n) {
    int temp = n, rem, sum = 0;
    while(temp > 0) {
        rem = temp % 10;
        sum = sum + (rem * rem * rem);
        temp = temp / 10;
    }
    if(sum == n)
        return 1;
    else
        return 0;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(isPrime(num))
        printf("%d is a Prime number\n", num);
    else
        printf("%d is not a Prime number\n", num);

    if(isArmstrong(num))
        printf("%d is an Armstrong number\n", num);
    else
        printf("%d is not an Armstrong number\n", num);

    return 0;
}
