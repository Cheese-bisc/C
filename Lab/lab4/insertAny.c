#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int a;
    struct node *link;
} node;
int main() {
  int n;
  printf("Enter n:");
  scanf("%d", &n);

  // make linked list
  int count = 1;
  node *head = NULL;
  node *current = NULL;
  node *new = NULL;
  while (count <= n) {
    if (count == 1) {
      head = malloc(sizeof(node));
      current = head;
      printf("Enter int :");
      scanf("%d", &current->a);
      current->link = NULL;
      count++;
    } else {
      new = malloc(sizeof(node));
      current->link = new;
      current = new;
      printf("Enter int :");
      scanf("%d", &current->a);
      current->link = NULL;
      count++;
    }
  }
  printf("\n");

  // insert anywhere
  int insertPos;
  printf("Enter the position you want to enter the new node : ");
  scanf("%d", &insertPos);
  count = 1;
  node *temp = head;
  new = malloc(sizeof(node));
  printf("Enter integer to insert :");
  scanf("%d", &new->a);
  new->link = NULL;
  while (count < insertPos - 1) {
    temp = temp->link;
    count++;
  }
  new->link = temp->link;
  temp->link = new;

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
