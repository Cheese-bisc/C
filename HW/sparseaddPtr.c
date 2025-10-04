#include <stdio.h>
#include <stdlib.h>
void input(int* arr, int r, int c);
void print(int* arr, int r, int c);
int main() {
  int c, r;
  printf("Enter number of rows and coloumns :");
  scanf("%d %d", &r, &c);

  int* arr = malloc(r * c * sizeof(int));
  int* brr = malloc(r * c * sizeof(int));

  printf("Enter matrix #1: ");
  input(arr, r, c);
  printf("Enter matrix #2: ");
  input(brr, r, c);
  print(arr, r, c);

  return 0;
}
void input(int* arr, int r, int c) {
  for (int i = 0; i < r; i++)
    for (int j = 0; j < c; j++)
      scanf("%d", (arr + i * c + j));
}
void print(int* arr, int r, int c) {
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++)
      printf("%d ", *(arr + i * c + j));
    printf("\n");
  }
  printf("\n");
}
