#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int a;
    struct node *link;
} node;

node *makell(int n);
void printll(node *head);
node *insert(node *head);

int main() {
  int n;
  printf("Enter number of nodes : ");
  scanf("%d", &n);

  node *head = makell(n);
  printf("\n");

  // insert
  head = insert(head);

  printll(head);

  return 0;
}
node *makell(int n) {
  node *head = NULL, *curr = NULL, *new = NULL;
  int count = 1;
  head = malloc(sizeof(node));
  printf("Enter element : ");
  scanf("%d", &head->a);
  head->link = NULL;
  curr = head;
  count++;
  while (count <= n) {
    new = malloc(sizeof(node));
    curr->link = new;
    curr = new;
    printf("Enter element : ");
    scanf("%d", &curr->a);
    curr->link = NULL;
    count++;
  }
  return head;
}
void printll(node *head) {
  node *temp = head;
  while (temp != NULL) {
    printf("%d ", temp->a);
    temp = temp->link;
  }
}
node *insert(node *head) {
  int ipos, choice;
  printf("Enter position to insert (1,2,3): ");
  scanf("%d", &choice);
  printf("Enter data for new node : ");
  node *new = malloc(sizeof(node));

  if (choice == 1) {
    scanf("%d", &new->a);
    new->link = head;
    head = new;
  } else if (choice == 2) {
    scanf("%d", &new->a);
    printf("Enter position within linked list : ");
    scanf("%d", &ipos);
    int count = 1;
    node *temp = head;
    while (count < ipos - 1) {
      temp = temp->link;
      count++;
    }
    new->link = temp->link;
    temp->link = new;
  } else {
    scanf("%d", &new->a);
    node *temp = head;
    while (temp->link != NULL)
      temp = temp->link;
    temp->link = new;
    new->link = NULL;
  }
  return head;
}
