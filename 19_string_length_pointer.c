#include <stdio.h>

int main() {
    char str[100];
    char *p;
    int len = 0;

    printf("Input a string: ");
    scanf("%s", str);

    p = str;  

    while(*p != '\0') {
        len++;
        p++;
    }

    printf("The length of the given string %s is : %d\n", str, len);

    return 0;
}
