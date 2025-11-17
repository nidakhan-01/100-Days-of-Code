/*Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.*/
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *in = fopen("input.txt", "r");
    if(in == NULL) {
        printf("input.txt not found");
        return 0;
    }

    FILE *out = fopen("output.txt", "w");
    if(out == NULL) {
        printf("Cannot create output.txt");
        fclose(in);
        return 0;
    }

    int ch;
    while((ch = fgetc(in)) != EOF) {
        if(islower(ch))
            ch = toupper(ch);
        fputc(ch, out);
    }

    fclose(in);
    fclose(out);

    printf("File processed successfully. Output written to output.txt");
    return 0;
}