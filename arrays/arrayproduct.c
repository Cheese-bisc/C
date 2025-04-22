#include <stdio.h>
int main() {
  int arr[5];
  int mult = 1;
  printf("Enter elements : ");

  for (int i = 0; i < 5; i++) {
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < 5; i++) {
    mult = mult * arr[i];
  }
  printf("%d", mult);
  return 0;
}
