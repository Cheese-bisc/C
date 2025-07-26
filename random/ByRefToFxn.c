#include <stdio.h>
typedef struct student {
        char name[20];
        int age;
        int rollno;
        float marks;
} student;
void scan(char *name, int *age, int *rollno, float *marks) {
    scanf(" %[^\n]", name);
    scanf("%d %d %f", age, rollno, marks);

    printf("%s\n %d\n %d\n %f", name, *age, *rollno, *marks);
    return;
}
int main() {
    student s1;
    scan(s1.name, &s1.age, &s1.rollno, &s1.marks);
}
