#include <stdio.h>
#define SWAP(x, y, t) ((t) = (x), (x) = (y), (y) = (t))

int partition(int arr[], int low, int high) {
  int pivot = arr[high];
  int i = low - 1;
  int t;

  for (int j = low; j < high; j++) {
    if (arr[j] < pivot) {
      i++;
      SWAP(arr[i], arr[j], t);
    }
  }
  SWAP(arr[i + 1], arr[high], t);
  return i + 1;
}
void QuickS(int arr[], int low, int high) {
  if (low < high) {
    int pi = partition(arr, low, high);
    QuickS(arr, low, pi - 1);
    QuickS(arr, pi + 1, high);
  }
}
int main() {
  int A[] = {5, 1, 7, 4, 5, 0};
  QuickS(A, 0, 5);

  for (int i = 0; i <= 5; i++)
    printf("%d ", A[i]);

  return 0;
}
