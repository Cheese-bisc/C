#include <limits.h>
#include <stdio.h>
int main() {
    int n, i, j, k;
    printf("Enter n : ");
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n / 2; i++) {
        int minidx = -1;
        int min = INT_MAX;
        for (j = i; j <= n - 1; j++) {
            if (min > arr[j]) {
                min = arr[j];
                minidx = j;
            }
        }
        int temp = arr[minidx];
        arr[minidx] = arr[i];
        arr[i] = temp;
        for (k = 0; k < n; k++)
            printf("%d ", arr[k]);
        printf("\n");
    }
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
