#include <stdio.h>

int main() {
    FILE *fp;
    char filename[30], line[100];
    int n, i;

    printf("Input the file name to be opened: ");
    scanf("%s", filename);

    fp = fopen(filename, "a");   // open file in append mode
    if(fp == NULL) {
        printf("Unable to open file.\n");
        return 0;
    }

    printf("Input the number of lines to be written: ");
    scanf("%d", &n);
    getchar(); // to clear the newline from input buffer

    printf("The lines are:\n");
    for(i = 0; i < n; i++) {
        fgets(line, sizeof(line), stdin);
        fputs(line, fp);
    }

    fclose(fp);

    printf("\nLines appended successfully.\n");
    return 0;
}
