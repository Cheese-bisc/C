#include <limits.h>
#include <stdio.h>
#define SWAP(x, y, t) ((t) = (x), (x) = (y), (y) = (t))
typedef struct Student {
        char name[20];
        int rollno;
        char grade;
} student;
int main() {
    int n, i, j, k;
    printf("Enter n : ");
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n - 1; i++) {
        int temp;
        int minidx = -1;
        int min = INT_MAX;
        for (j = i; j <= n - 1; j++) {
            if (min > arr[j]) {
                min = arr[j];
                minidx = j;
            }
        }
        SWAP(arr[i], arr[minidx], temp);
    }
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
