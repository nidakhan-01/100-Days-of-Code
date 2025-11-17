/*Q121: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf().
 After writing, display a message confirming that the data was successfully saved.*/
 #include <stdio.h>

int main() {
    char name[100];
    int age;

    printf("Enter name: ");
    scanf("%s", name);

    printf("Enter age: ");
    scanf("%d", &age);

    FILE *f = fopen("info.txt", "w");

    if(f == NULL) {
        printf("Error creating file");
        return 0;
    }

    fprintf(f, "Name: %s\nAge: %d\n", name, age);
    fclose(f);

    printf("File created successfully! Data written to info.txt");
    return 0;
}