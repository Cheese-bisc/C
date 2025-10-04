#include <stdio.h>
#include <stdlib.h>
typedef struct node {
  int data;
  struct node* link;
} node;

node* makell(int n);
node* insert(node* head);
node* delete(node* head);
void print(node* head);
node* tolast(node* head);

int main() {
  int n;
  printf("Enter number of nodes : ");
  scanf("%d", &n);

  node* head = makell(n);

  head = insert(head);

  print(head);
}
node* makell(int n) {
  int count = 1;
  node *head = NULL, *curr = NULL, *new = NULL;
  head = malloc(sizeof(node));
  curr = head;
  printf("Enter data at node #%d :", count);
  scanf("%d", &curr->data);
  curr->link = NULL;
  count++;
  while (count <= n) {
    new = malloc(sizeof(node));
    curr->link = new;
    curr = new;
    printf("Enter data at node #%d : ", count);
    scanf("%d", &curr->data);
    curr->link = head;
    count++;
  }
  return head;
}
void print(node* head) {
  node* temp = head;
  do {
    printf("%d ", temp->data);
    temp = temp->link;
  } while (temp != head);
  return;
}
node* insert(node* head) {
  printf("Enter insert position(1:head , 2:mid , 3:last) : ");
  int ipos, choice;
  scanf("%d", &choice);

  node* new = malloc(sizeof(node));
  printf("Enter new node data : ");
  scanf("%d", &new->data);
  new->link = NULL;

  node* last = tolast(head);
  if (choice == 1) {
    last->link = new;
    new->link = head;
    head = new;
  } else if (choice == 2) {
    node* temp = head;
    printf("Enter position within linked list : ");
    scanf("%d", &ipos);
    int count = 1;
    while (count < ipos - 1) {
      temp = temp->link;
      count++;
    }
    new->link = temp->link;
    temp->link = new;
  } else {
    last->link = new;
    new->link = head;
  }
  return head;
}

node* delete(node* head) {
  int choice, dpos;
  printf("Enter position to delete(1.Head ,2.Mid, 3.Tail)");
  scanf("%d", &choice);
  node* last = tolast(head);

  return head;
}

node* tolast(node* head) {
  node* temp = head;
  while (temp->link != head)
    temp = temp->link;
  return temp;
}
