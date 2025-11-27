/*Q147: Store employee data in a binary file using fwrite() and read using fread().*/
#include<stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main()
{
    struct Employee e, readE;
    FILE *fp;

    // Input employee details
    scanf("%s", e.name);
    scanf("%d", &e.id);
    scanf("%f", &e.salary);

    // Write to binary file
    fp = fopen("employee.dat", "wb");
    fwrite(&e, sizeof(struct Employee), 1, fp);
    fclose(fp);

    // Read from binary file
    fp = fopen("employee.dat", "rb");
    fread(&readE, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("Name: %s | ID: %d | Salary: %.2f", readE.name, readE.id, readE.salary);

    return 0;
}