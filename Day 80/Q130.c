/*Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    FILE *f = fopen("students.txt", "w");
    if(f == NULL) {
        printf("Could not create file");
        return 0;
    }

    char name[30];
    int roll, marks;

    for(int i=0; i<n; i++) {
        printf("Enter name: ");
        scanf("%s", name);
        printf("Enter roll: ");
        scanf("%d", &roll);
        printf("Enter marks: ");
        scanf("%d", &marks);

        fprintf(f, "%s %d %d\n", name, roll, marks);
    }

    fclose(f);

    f = fopen("students.txt", "r");
    if(f == NULL) {
        printf("Error opening file");
        return 0;
    }

    printf("\nStored Records:\n");

    while(fscanf(f, "%s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }

    fclose(f);
    return 0;
}