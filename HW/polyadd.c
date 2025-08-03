#include <stdio.h>
int max(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}
int main() {
    int deg1, deg2;
    printf("Enter degrees of both polynomials :");
    scanf("%d %d", &deg1, &deg2);
    int size1 = deg1 + 1;
    int size2 = deg2 + 1;

    int arr[size1], brr[size2];
    printf("Enter arr #1 :");
    for (int i = 0; i < size1; i++)
        scanf("%d", &arr[i]);
    printf("Enter arr #2 :");
    for (int i = 0; i < size2; i++)
        scanf("%d", &brr[i]);

    int i = 0, j = 0, Rarr[max(size1, size2)];
    while (i < size1 && j < size2) {
        Rarr[i] = arr[i] + brr[i];
        i++;
        j++;
    }
    while (i < size1) {
        Rarr[i] = arr[i];
        i++;
    }
    while (j < size2) {
        Rarr[j] = brr[j];
        j++;
    }
    for (int i = 0; i < max(size1, size2); i++)
        printf("%d\t", Rarr[i]);
}
