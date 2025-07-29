#include <stdio.h>
#include <stdlib.h>
typedef struct Student {
        char name[20];
        int rollno;
        char grade;
} student;

void printarr(student *arr, int size);
void search(student *arr, int size, int roll);
void insert(student *arr, int size, int ipos);
void delete(student *arr, int size);

int main() {
    int n, roll, insertPos;
    char choice;
    printf("Enter number of students :");
    scanf("%d", &n);

    student *ptr = calloc(n, sizeof(student));

    for (int i = 0; i < n; i++) {
        printf("Enter name of student %d :", i + 1);
        scanf(" %[^\n]", ptr[i].name);

        printf("Enter rollno. :");
        scanf(" %d", &ptr[i].rollno);

        printf("Enter grade :");
        scanf(" %c", &ptr[i].grade);
    }
    printf("\n\n");

    //---print the array---
    printarr(ptr, n);

    //---insert new struct
    printf("Where do you want to insert the new data ?");
    scanf("%d", &insertPos);
    // insert(ptr, n, insertPos);
    ptr = realloc(ptr, (n + 1) * sizeof(student));

    //---search for student---
    printf("Do you want to search for a student ? [Y/n]");
    choice = getchar(); // reads single char including new line
    if (choice == 'y' || choice == 'Y' || choice == '\n') {
        printf("Enter roll to search :");
        scanf(" %d", &roll);
        search(ptr, n, roll);
    } else if (choice == 'n')
        printf("OK. Program will terminate");
    else
        printf("Enter valid choice");
    //------

    free(ptr);
    return 0;
}
void printarr(student *arr, int size) {
    printf("--------------------");
    for (int i = 0; i < size; i++) {
        printf("Name : %s \n", arr[i].name);
        printf("Roll no : %d \n", arr[i].rollno);
        printf("Grade : %c \n", arr[i].grade);
    }
    return;
}
void search(student *arr, int size, int roll) {
    for (int i = 0; i < size; i++) {
        if (arr[i].rollno == roll) {
            printf("----------Details of searched student are----------\n");
            printf("Name : %s \n", arr[i].name);
            printf("Roll no : %d \n", arr[i].rollno);
            printf("Grade : %c \n", arr[i].grade);
        }
    }
}
void insert(student *arr, int size, int ipos) {}
