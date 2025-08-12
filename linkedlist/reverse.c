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

  // reverse
  node *temp = NULL;
  node *temp2 = NULL;
  while (head != NULL) {
    temp2 = head->link;
    head->link = temp;
    temp = head;
    head = temp2;
  }
  // update head to first node again
  head = temp;
  // print
  temp = head;
  while (temp != NULL) {
    printf("%d ", temp->a);
    temp = temp->link;
  }
  // free memory of linked list
  while (head != NULL) {
    temp = head;
    head = head->link;
    free(temp);
  }
  return 0;
}
