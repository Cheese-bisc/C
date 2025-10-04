#include <stdio.h>
int main() {
  int n;

  printf("Enter rows/coloumns :");
  scanf("%d", &n);

  int arr[n][n];

  // input
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &arr[i][j]);
    }
  }

  // transpose
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) // or j = i ; j < n
    {
      int temp = arr[i][j];
      arr[i][j] = arr[j][i];
      arr[j][i] = temp;
    }
  }

  // print
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
}
