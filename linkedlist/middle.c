#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int a;
    struct node *link;
} node;
node *makell(int n);
void printll(node *head);
void middle(node *head);
int main() {
  int n;
  printf("Enter number of nodes :");
  scanf("%d", &n);

  // make ll
  node *head = makell(n);
  printf("\n");

  // find middle
  middle(head);
  printf("\n");

  // print
  printll(head);
  printf("\n");
}
node *makell(int n) {
  node *head = NULL;
  node *curr = NULL;
  node *new = NULL;
  int count = 1;
  while (count <= n) {
    if (count == 1) {
      head = malloc(sizeof(node));
      curr = head;
      printf("Enter int at #%d :", count);
      scanf("%d", &curr->a);
      curr->link = NULL;
      count++;
    } else {
      new = malloc(sizeof(node));
      curr->link = new;
      curr = new;
      printf("Enter int at #%d :", count);
      scanf("%d", &curr->a);
      curr->link = NULL;
      count++;
    }
  }
  return head;
}
void printll(node *head) {
  node *temp = head;
  while (temp != NULL) {
    printf("Integer is : %d\n", temp->a);
    temp = temp->link;
  }
  return;
}
void middle(node *head) {
  node *slow = head;
  node *fast = head;
  while (fast != NULL && fast->link != NULL) {
    fast = fast->link->link;
    slow = slow->link;
  }
  printf("Element at middle is : %d\n", slow->a);
  printf("Address of middle node is : %p", (void *)slow);
}
