#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SWAP(x, y, t) ((t) = (x), (x) = (y), (y) = (t))
void sort(int arr[], int n);
int binarySearch(int arr[], int target, int n);
int main() {
    srand(time(NULL));
    int n, target;
    printf("Enter size of array :");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) { // Randomly generate array
        arr[i] = (rand() % 1000);
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter element to search :");
    scanf("%d", &target);

    // sorting of array
    sort(arr, n);
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
    // binary search
    int ans = binarySearch(arr, target, n);

    printf("%d", ans);
}
void sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = INT_MAX;
        int minidx = -1;
        int temp;
        for (int j = i; j < n; j++) {
            if (arr[j] < min) {
                min = arr[j];
                minidx = j;
            }
        }
        SWAP(arr[i], arr[minidx], temp);
    }
    return;
}
int binarySearch(int arr[], int target, int n) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int middle = low + (high - low) / 2;
        int value = arr[middle];

        if (value < target)
            low = middle + 1;
        else if (value > target)
            high = middle - 1;
        else
            return middle;
    }
    return -1;
}
