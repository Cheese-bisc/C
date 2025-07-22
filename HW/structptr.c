#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Student {
        char name[20];
        int rollno;
        char grade;
} student;

int main() {
    int n;
    printf("Enter number of students :");
    scanf("%d", &n);

    student *ptr[n];

    for (int i = 0; i < n; i++) {
        ptr[i] =
            malloc(sizeof(student)); // was (*student)..; but inn C , it gets
                                     // typecasted automatically. But not in C++

        getchar();
        printf("Enter name of student %d :", i + 1);
        fgets(ptr[i]->name, sizeof(ptr[i]->name), stdin);
        ptr[i]->name[strcspn(ptr[i]->name, "\n")] = '\0';
        printf("Enter rollno. :");
        scanf("%d", &(*ptr[i]).rollno);
        getchar();
        printf("Enter grade :");
        scanf("%c", &ptr[i]->grade);
    }
    for (int i = 0; i < n; i++) {
        printf("%s\n", ptr[i]->name);
        printf("%d\n", ptr[i]->rollno);
        printf("%c\n", ptr[i]->grade);

        printf("\n");
    }
    for (int i = 0; i < n; i++) {
        free(ptr[i]);
    }
    return 0;
}
