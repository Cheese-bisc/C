#include <stdio.h>
#include <stdlib.h>
typedef struct node {
  int data;
  int x, y, z;
  struct node* link;
} node;
node* makepolyll(int size);
void printpoly(node* head);

int main() {
  int n;
  printf("Enter number of terms : ");
  scanf("%d", &n);

  node* head = makepolyll(n);

  printpoly(head);
}

node* makepolyll(int size) {
  node *head = NULL, *curr = NULL, *new = NULL;
  int count = 1;
  head = malloc(sizeof(node));
  printf("Enter data : ");
  scanf("%d", &head->data);
  printf("Enter powers (x,y,z):");
  scanf("%d %d %d", &head->x, &head->y, &head->z);
  head->link = NULL;
  curr = head;
  count++;

  while (count <= size) {
    new = malloc(sizeof(node));
    printf("Enter data : ");
    scanf("%d", &new->data);
    printf("Enter powers (x,y,z):");
    scanf("%d %d %d", &new->x, &new->y, &new->z);
    curr->link = new;
    curr = new;
    curr->link = NULL;
    count++;
  }
  return head;
}
void printpoly(node* head) {
  node* temp = head;
  while (temp != NULL) {
    if (temp->x == 0 && temp->y == 0 && temp->z == 0) {
      printf(" %d", temp->data);
      temp = temp->link;
    }

    else {
      printf("%dx^%dy^%dz^%d +", temp->data, temp->x, temp->y, temp->z);
      temp = temp->link;
    }
  }
  return;
}
