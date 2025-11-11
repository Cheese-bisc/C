#include <stdio.h>
#define SWAP(x, y, t) ((t) = (x), (x) = (y), (y) = (t))

void heapify(int A[], int n, int i) {
  int largest = i;
  int l = 2 * i + 1;
  int r = 2 * i + 2;
  int temp;

  if (l < n && A[l] > A[largest])
    largest = l;
  if (r < n && A[r] > A[largest])
    largest = r;
  if (largest != i) {
    SWAP(A[i], A[largest], temp);
    heapify(A, n, largest);
  }
  return;
}

void heapSort(int A[], int n) {
  int temp;
  for (int i = n / 2 - 1; i >= 0; i--)
    heapify(A, n, i);
  for (int i = n - 1; i > 0; i--) {
    SWAP(A[0], A[i], temp);
    heapify(A, i, 0);
  }
}

void printArr(int A[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", A[i]);
  }
}

int main() {
  int arr[] = {9, 3, 2, 5, 1, 7};
  int n = sizeof(arr) / sizeof(int);

  heapSort(arr, n);

  printArr(arr, n);
}
