/*Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char filename[100];
    printf("Enter file name: ");
    scanf("%s", filename);

    FILE *f = fopen(filename, "r");
    if(f == NULL) {
        printf("File not found");
        return 0;
    }

    int characters = 0, words = 0, lines = 0;
    char c, prev = ' ';

    while((c = fgetc(f)) != EOF) {
        characters++;

        if(c == '\n')
            lines++;

        if(!isspace(c) && isspace(prev))
            words++;

        prev = c;
    }

    if(characters > 0 && prev != '\n')
        lines++;

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    fclose(f);
    return 0;
}