#include <stdio.h>
int printnum(int n) {
  if (n == 1)
    return 1;

  printnum(n - 1);  // recursive call first
  printf("%d ", n); // then print

  return 1;
}
int main() {
  int n;
  scanf("%d", &n);

  printnum(n);
  return 0;
}
