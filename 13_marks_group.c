#include <stdio.h>

int main() {
    int marks[50];
    int i;
    int c0_9 = 0, c10_19 = 0, c20_29 = 0, c30_39 = 0, c40_49 = 0;
    int c50_59 = 0, c60_69 = 0, c70_79 = 0, c80_89 = 0, c90_100 = 0;

    printf("Enter marks of 50 students:\n");
    for(i = 0; i < 50; i++) {
        scanf("%d", &marks[i]);
    }

    for(i = 0; i < 50; i++) {
        if(marks[i] >= 0 && marks[i] <= 9)
            c0_9++;
        else if(marks[i] >= 10 && marks[i] <= 19)
            c10_19++;
        else if(marks[i] >= 20 && marks[i] <= 29)
            c20_29++;
        else if(marks[i] >= 30 && marks[i] <= 39)
            c30_39++;
        else if(marks[i] >= 40 && marks[i] <= 49)
            c40_49++;
        else if(marks[i] >= 50 && marks[i] <= 59)
            c50_59++;
        else if(marks[i] >= 60 && marks[i] <= 69)
            c60_69++;
        else if(marks[i] >= 70 && marks[i] <= 79)
            c70_79++;
        else if(marks[i] >= 80 && marks[i] <= 89)
            c80_89++;
        else if(marks[i] >= 90 && marks[i] <= 100)
            c90_100++;
    }

    printf("0-9   : %d\n", c0_9);
    printf("10-19 : %d\n", c10_19);
    printf("20-29 : %d\n", c20_29);
    printf("30-39 : %d\n", c30_39);
    printf("40-49 : %d\n", c40_49);
    printf("50-59 : %d\n", c50_59);
    printf("60-69 : %d\n", c60_69);
    printf("70-79 : %d\n", c70_79);
    printf("80-89 : %d\n", c80_89);
    printf("90-100: %d\n", c90_100);

    return 0;
}
