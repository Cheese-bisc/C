#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int a;
    struct node *link;
} node;
int main() {
  int n;
  printf("Enter number of nodes :");
  scanf("%d", &n);

  // make linked list
  node *head = NULL;
  node *current = NULL;
  node *new = NULL;
  int count = 1;
  while (count <= n) {
    if (count == 1) {
      head = malloc(sizeof(node));
      printf("Enter a for node #%d :", count);
      scanf("%d", &head->a);
      head->link = NULL;
      current = head;
      count++;
    } else {
      new = malloc(sizeof(node));
      printf("Enter a for node #%d :", count);
      scanf("%d", &new->a);
      new->link = NULL;
      current->link = new;
      current = new;
      count++;
    }
  }
  // inserting 2 nodes
  new = NULL;
  current = NULL;
  count = 1;
  while (count <= 2) {
    if (count == 1) {
      new = malloc(sizeof(node));
      printf("Enter a for node #%d:", count);
      scanf("%d", &new->a);
      new->link = NULL;
      current = new;
      count++;
    } else {
      new = malloc(sizeof(node));
      printf("Enter a for node #%d:", count);
      scanf("%d", &new->a);
      new->link = NULL;
      current->link = new;
      count++;
    }
  }
  // inserting them
  int insertPos;
  count = 1;
  printf("Enter the position to insert :");
  scanf("%d", &insertPos);
  // traverse to ipos - 1
  node *temp = head;
  while (count < insertPos - 1) {
    temp = temp->link;
    count++;
  }
  // insert in
  current->link->link = temp->link;
  temp->link = current;

  // print new linked list
  count = 1;
  temp = head;
  while (temp != NULL) {
    printf("#%d node : %d\n", count, temp->a);
    temp = temp->link;
    count++;
  }

  // free memory of linked list
  while (head != NULL) {
    temp = head;
    head = head->link;
    free(temp);
  }
  return 0;
}
