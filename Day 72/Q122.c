/*Q122: Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets().
 The program should print all the lines to the console until EOF (end of file) is reached.*/
 #include <stdio.h>

int main() {
    FILE *f = fopen("info.txt", "r");
    if(f == NULL) {
        printf("File not found");
        return 0;
    }

    char line[200];
    while(fgets(line, sizeof(line), f)) {
        printf("%s", line);
    }

    fclose(f);
    return 0;
}