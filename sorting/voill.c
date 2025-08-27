#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int data;
    void *arr[1];
} node;
node *makell(int n);

int main() {
  int n;
  printf("Enter no. of nodes : ");
  scanf("%d", &n);

  node *head = makell(n);

  node *temp = head;
  while (temp != NULL) {
    printf("%d ", temp->data);
    temp = temp->arr[1];
  }
  return 0;
}
node *makell(int n) {
  node *head = NULL, *new = NULL, *curr = NULL;
  int count = 1;
  head = malloc(sizeof(node));
  printf("Enter data : ");
  scanf("%d", &head->data);
  head->arr[0] = NULL;
  head->arr[1] = NULL;
  curr = head;
  count++;
  while (count <= n) {
    new = malloc(sizeof(node));
    printf("Enter data : ");
    scanf("%d", &new->data);
    curr->arr[1] = new;
    new->arr[0] = curr;
    new->arr[1] = NULL;
    curr = new;
    count++;
  }
  return head;
}
