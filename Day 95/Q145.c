/*Q145: Return a structure containing top student's details from a function.*/
#include<stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

struct Student topStudent(struct Student s[], int n)
{
    int i, top = 0;
    for(i = 1; i < n; i++)
    {
        if(s[i].marks > s[top].marks)
            top = i;
    }
    return s[top];
}

int main()
{
    int n = 3, i;
    struct Student s[3], top;

    for(i = 0; i < n; i++)
    {
        scanf("%s", s[i].name);
        scanf("%d", &s[i].roll_no);
        scanf("%d", &s[i].marks);
    }

    top = topStudent(s, n);
    printf("Top Student: %s | Roll: %d | Marks: %d", top.name, top.roll_no, top.marks);

    return 0;
}