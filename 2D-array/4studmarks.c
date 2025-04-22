#include <stdio.h>
int main() {
  int arr[4][2];
	printf("Penis\n");

  printf("Enter data :");
  for (int i = 0; i<= 3; i++) {
    for (int j = 0; j <= 1; j++)

      scanf("%d", &arr[i][j]);
  }
  for (int i = 0; i <= 3; i++) {
    for (int j = 0; j <= 1; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }

  return 0;
}
