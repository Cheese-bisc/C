#include <stdio.h>
#define SWAP(x, y, t) ((t) = (x), (x) = (y), (y) = (t))

void insertionSort(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    int j = i;
    while (j > 0 && arr[j - 1] > arr[j]) {
      int temp;
      SWAP(arr[j], arr[j - 1], temp);
      j--;
    }
  }
}

int main() {
  int arr[] = {9, 4, 1, 6, 5, 7};
  int n = sizeof(arr) / sizeof(int);

  insertionSort(arr, n);

  for (int i = 0; i < n; i++)
    printf("%d ", arr[i]);
}
