/*Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char filename[100];
    printf("Enter filename: ");
    scanf("%s", filename);

    FILE *f = fopen(filename, "r");
    if(f == NULL) {
        printf("File not found");
        return 0;
    }

    int vowels = 0, consonants = 0;
    char c;

    while((c = fgetc(f)) != EOF) {
        if(isalpha(c)) {
            char x = tolower(c);
            if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u')
                vowels++;
            else
                consonants++;
        }
    }

    fclose(f);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d", consonants);

    return 0;
}