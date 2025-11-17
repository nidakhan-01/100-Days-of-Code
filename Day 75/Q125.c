/*Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.*/
#include <stdio.h>

int main() {
    char filename[100];
    char text[300];

    printf("Enter file name: ");
    scanf("%s", filename);
    getchar();

    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    FILE *f = fopen(filename, "a");
    if(f == NULL) {
        printf("File not found");
        return 0;
    }

    fputs(text, f);
    fclose(f);

    printf("File updated successfully with appended text.");
    return 0;
}