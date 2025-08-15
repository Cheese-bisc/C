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
  // make it a looped linked list
  node *temp = head;
  count = 1;
  while (count <= 3) {
    temp = temp->link;
    count++;
  }
  new->link = temp;

  // loop to check
  node *slow = head;
  node *fast = head;
  while (1) {
    if (slow == fast) {
      printf("Linked list loops.");
      break;
    } else {
      slow = slow->link;
      fast = fast->link->link;
    }
  }
  // meet at intersection point
  slow = head;
  count = 1;
  while (slow != head) {
    slow = slow->link;
    fast = fast->link;
    count++;
  }
  printf("Point of intersection node is : %d\n", count);
  printf("Value at node : %d\n", slow->a);

  // freeing a loooped linked list
  temp = head;
  while (head != fast) {
    head = head->link;
    free(temp);
    temp = head;
  }
  return 0;
}
