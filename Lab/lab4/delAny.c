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
  node *new = NULL;
  node *current = NULL;
  int count = 1;
  while (count <= n) {
    if (count == 1) {
      head = malloc(sizeof(node));
      current = head;
      printf("Enter int :");
      scanf("%d", &head->a);
      head->link = NULL;
      count++;
    } else {
      new = malloc(sizeof(node));
      current->link = new;
      printf("Enter int :");
      scanf("%d", &new->a);
      new->link = NULL;
      current = new;
      count++;
    }
  }

  // delete a node
  int delPos;
  count = 1;
  printf("Which node do you want to delete ? :");
  scanf("%d", &delPos);
  node *temp = head;
  if (delPos == 1) {
    head = head->link;
    free(temp);
  } else if (delPos == n) {
    while (count < delPos - 1) {
      temp = temp->link;
      count++;
    }
    free(temp->link);
    temp->link = NULL;

  } else {
    node *todelete = NULL;
    while (count < delPos - 1) {
      temp = temp->link;
      count++;
    }
    todelete = temp->link;
    temp->link = temp->link->link;
    free(todelete);
  }
  // reduce n
  n--;
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
