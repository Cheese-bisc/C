#include <stdio.h>
#include <stdlib.h>
typedef struct node {
  int a;
  struct node* link;
} node;
int main() {
  node *head = NULL, *curr = NULL, *new = NULL;
  int n;
  printf("Enter no if nodes : ");
  scanf("%d", &n);

  head = malloc(sizeof(node));
  curr = calloc(n, sizeof(node));
}
