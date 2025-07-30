#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#define SWAP(x, y, t) ((t) = (x), (x) = (y), (y) = (t))
typedef struct Student {
        char name[20];
        int rollno;
        char grade;
} student;

void printarr(student *arr, int size);
void search(student *arr, int size, int roll);
student *insert(student *arr, int size, int ipos);
student *delete(student *arr, int size, int droll);
student *selecsort(student *arr, int size);

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

    do {
        printf("Press i to insert new data, d to delete s to search for a "
               "student S to sort or e to terminate:");
        scanf(" %c", &choice);
        //---insert new struct
        if (choice == 'i') {
            n++;
            printf("Where do you want to insert the new data ?");
            scanf("%d", &insertPos);

            ptr = insert(ptr, n, insertPos);

            printarr(ptr, n);
        }
        //---delete a struct
        else if (choice == 'd') {
            printf("Enter the roll no you want to delete :");
            scanf(" %d", &roll);
            delete(ptr, n, roll);
            n--;

            printarr(ptr, n);
        }
        //---search for student---
        else if (choice == 's') {
            printf("Enter roll to search :");
            scanf(" %d", &roll);
            search(ptr, n, roll);
        } else if (choice == 'S') {
            selecsort(ptr, n);
            printarr(ptr, n);
        }
    } while (choice != 'e');
    free(ptr);
    return 0;
}
void printarr(student *arr, int size) {
    printf("--------------------\n");
    for (int i = 0; i < size; i++) {
        printf("Name : %s \n", arr[i].name);
        printf("Roll no : %d \n", arr[i].rollno);
        printf("Grade : %c \n", arr[i].grade);
        printf("\n");
    }
    return;
}
student *selecsort(student *arr, int size) {
    for (int i = 0; i < size; i++) {
        student temp;
        int minIdx = -1, min = INT_MAX;
        for (int j = i; j < size; j++) {
            if (min > arr[j].rollno) {
                min = arr[j].rollno;
                minIdx = j;
            }
        }
        SWAP(arr[i], arr[minIdx], temp);
    }
    return arr;
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
student *insert(student *arr, int size, int ipos) {
    arr = realloc(arr, size * sizeof(student));
    for (int i = size; i > ipos; i--)
        arr[i] = arr[i - 1];
    printf("Enter name of new student :");
    scanf(" %[^\n]", arr[ipos].name);
    printf("Enter roll no :");
    scanf(" %d", &arr[ipos].rollno);
    printf("Enter grade :");
    scanf(" %c", &arr[ipos].grade);

    return arr;
}
student *delete(student *arr, int size, int droll) {
    for (int i = 0; i < size; i++) {
        if (arr[i].rollno == droll) {
            for (int j = i; j < size; j++) {
                arr[j] = arr[j + 1];
            }
        }
    }
    arr = realloc(arr, size - 1 * sizeof(student));
    return arr;
}
