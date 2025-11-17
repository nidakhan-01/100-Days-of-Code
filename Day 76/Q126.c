/*Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.*/
#include <stdio.h>

int main() {
    char filename[100];
    printf("Enter filename: ");
    scanf("%s", filename);

    FILE *f = fopen(filename, "r");
    if(f == NULL) {
        printf("Error: File does not exist!");
        return 0;
    }

    printf("File opened successfully.\n");

    char line[300];
    while(fgets(line, sizeof(line), f)) {
        printf("%s", line);
    }

    fclose(f);
    return 0;
}