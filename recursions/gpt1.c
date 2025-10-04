#include <stdio.h>

int findsum(int n) {
  if (n == 1)
    return 1;

  return n + findsum(n - 1);
}

int main() {
  int n;
  printf("Enter number : ");
  scanf("%d", &n);

  printf("%d", findsum(n));
}
