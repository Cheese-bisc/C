#include <stdio.h>
typedef struct Book {
        char name[20];
        float price;
        int pages;
} book;
int main() {
    book b1, b2, b3;

    book *ptr[3];

    ptr[0] = &b1;
    ptr[1] = &b2;
    ptr[2] = &b3;

    for (int i = 0; i < 3; i++) {
        printf("Enter details of book %d", i + 1);
        printf("\n");
        printf("Enter name of book %d :", i + 1);
        scanf("%s", ptr[i]->name);
        // fgets(ptr[i]->name, sizeof(ptr[i]->name), stdin);
        // ptr[i]->name[strcspn(ptr[i]->name, "\n")] = '\0';
        printf("Enter price :");
        scanf("%f", &ptr[i]->price);
        printf("Enter no of pages :");
        scanf("%d", &ptr[i]->pages);

        printf("\n");
    }
    for (int i = 0; i < 3; i++) {
        printf("%s \n", ptr[i]->name);
        printf("%f \n", (*ptr[i]).price);
        printf("%d \n", ptr[i]->pages);
    }
}
