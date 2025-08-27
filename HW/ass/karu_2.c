#include <stdio.h>
#include <stdlib.h>
typedef struct node {
  int data;
  struct node* link;
} node;

node* makell(int n);
void Nthfrombehind(node* head);
void print(node* head);

int main() {
  int n;
  printf("Enter no of nodes in linked list : ");
  scanf("%d", &n);

  node* head = makell(n);

  Nthfrombehind(head);
  printf("\n");

  print(head);

  return 0;
}
node* makell(int n) {
  int count = 1;
  node *curr = NULL, *head = NULL, *new = NULL;
  head = malloc(sizeof(node));
  printf("Enter data at node #%d : ", count);
  scanf("%d", &head->data);
  head->link = NULL;
  curr = head;
  count++;
  while (count <= n) {
    new = malloc(sizeof(node));
    printf("Enter data at node #%d : ", count);
    scanf("%d", &new->data);
    curr->link = new;
    new->link = NULL;
    curr = new;
    count++;
  }
  return head;
}
void Nthfrombehind(node* head) {
  int search, count = 1;
  node *nth = head, *temp = head;
  printf("Enter the node you want to search : ");
  scanf("%d", &search);
  while (count <= search) { // this works as im moving one step ahead of search
                            // and go upto temp != null
    temp = temp->link;
    count++;
  }
  while (temp != NULL) {
    nth = nth->link;
    temp = temp->link;
  }
  printf("Data at %d node is : %d", search, nth->data);
}
void print(node* head) {
  node* temp = head;
  while (temp != NULL) {
    printf("%d ", temp->data);
    temp = temp->link;
  }
}
