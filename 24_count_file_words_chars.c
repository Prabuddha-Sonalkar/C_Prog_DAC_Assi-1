#include <stdio.h>

int main() {
    FILE *fp;
    char filename[30], ch;
    int words = 0, chars = 0;

    printf("Input the file name to be opened : ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Could not open file\n");
        return 0;
    }

    while ((ch = fgetc(fp)) != EOF) {
        chars++;

        if (ch == ' ' || ch == '\n')
            words++;
    }

    // add one more word if file is not empty (last word has no space after it)
    if (chars > 0)
        words++;

    fclose(fp);

    printf("The number of words in %s file is : %d\n", filename, words);
    printf("The number of characters in the file %s is : %d\n", filename, chars);

    return 0;
}
