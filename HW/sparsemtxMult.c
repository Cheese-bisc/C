#include <stdio.h>
#include <stdlib.h>
int input(int *arr, int r, int c);
void print(int *arr, int r, int c);
int compactarr(int *arr, int *carr, int r, int c, int count);
int main() {
    int c, r, x, y;
    printf("Enter number of rows and coloumns of mtx #1 :");
    scanf("%d %d", &r, &c);
    printf("Enter number of rows and coloumns of mtx #2 :");
    scanf("%d %d", &x, &y);

    int *arr = malloc(r * c * sizeof(int));
    int *brr = malloc(x * y * sizeof(int));

    printf("Enter matrix #1: ");
    int count1 = input(arr, r, c);
    printf("Enter matrix #2: ");
    int count2 = input(brr, x, y);

    // compact banao
    int *carr1 = malloc(3 * count1 * sizeof(int));
    int *carr2 = malloc(3 * count2 * sizeof(int));
    int l = compactarr(arr, carr1, r, c, count1);
    int m = compactarr(brr, carr2, x, y, count2);

    // printing
    printf("Comapct of first matrix is : \n");
    print(carr1, 3, l);
    printf("Comapct of second matrix is : \n");
    print(carr2, 3, m);

    free(arr);
    free(brr);
    free(carr1);
    free(carr2);
    return 0;
}
int compactarr(int *arr, int *carr, int r, int c, int count) {
    int k = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (*(arr + i * c + j) != 0) {
                *(carr + 0 * count + k) = i;
                *(carr + 1 * count + k) = j;
                *(carr + 2 * count + k) = *(arr + i * c + j);
                k++;
            }
        }
    }
    return k;
}
int input(int *arr, int r, int c) {
    int count = 0;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) {
            scanf("%d", (arr + i * c + j));
            if (*(arr + i * c + j) != 0)
                count++;
        }
    return count;
}
void print(int *arr, int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            printf("%d ", *(arr + i * c + j));
        printf("\n");
    }
    printf("\n");
}
