#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#define SWAP(x, y, t) ((t) = (x), (x) = (y), (y) = (t))
typedef struct node {
  int data;
  struct node* link;
} node;
node* makell(int n);
node* merge(node* head1, node* head2);

int main() {
  int n1, n2;
  printf("Enter sizes of both nodes : ");
  scanf("%d %d", &n1, &n2);

  // make linked list
  node *head1 = NULL, *head2 = NULL;
  head1 = makell(n1);
  head2 = makell(n2);

  // merge linked list
  merge(head1, head2);

  /*print */
  node* temp = head1;
  while (temp != NULL) {
    printf("%d ", temp->data);
    temp = temp->link;
  }
  return 0;
}
node* makell(int n) {
  node *head = NULL, *new = NULL, *curr = NULL;
  int count = 0;
  head = malloc(sizeof(node));
  curr = head;
  printf("Enter data at node #%d : ", count);
  scanf("%d", &curr->data);
  curr->link = NULL;
  count++;
  while (count < n) {
    new = malloc(sizeof(node));
    curr->link = new;
    curr = new;
    printf("Enter data at node #%d : ", count);
    scanf("%d", &curr->data);
    curr->link = NULL;
    count++;
  }

  return head;
}
node* merge(node* head1, node* head2) { return head1; }
