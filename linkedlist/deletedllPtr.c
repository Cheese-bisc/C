#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int a;
    struct node *next;
    struct node *prev;
} node;
node *makedll(int n, node **Ptrtail);
void print(node *head);
node *delete(node *head, node **Ptrtail);

int main() {
  int n;
  printf("Enter the number of nodes :");
  scanf("%d", &n);

  // make dll
  node *head = NULL, *tail = NULL, **Ptrtail = &tail;
  head = makedll(n, Ptrtail);

  // delete
  delete(head, &tail);

  // print dll
  print(head);
}
node *makedll(int n, node **Ptrtail) {
  node *head = NULL, *curr = NULL, *new = NULL;
  int count = 1;
  head = malloc(sizeof(node));
  printf("Enter integer at node #%d :", count);
  scanf("%d", &head->a);
  head->prev = NULL;
  head->next = NULL;
  curr = head;
  count++;
  while (count <= n) {
    new = malloc(sizeof(node));
    printf("Enter integer at node #%d :", count);
    scanf("%d", &new->a);
    curr->next = new;
    new->prev = curr;
    new->next = NULL;
    curr = new;
    count++;
  }
  *Ptrtail = curr;
  return head;
}
void print(node *head) {
  node *temp = head;
  while (temp != NULL) {
    printf("Element is : %d\n", temp->a);
    temp = temp->next;
  }
}
node *delete(node *head, node **Ptrtail) {
  int dpos, count = 1, choice;
  node *temph = NULL, *dnode = NULL, *tempt = NULL;

  printf("Delete at head , middle or tail ? (1,2,3) : ");
  scanf("%d", &choice);

  if (choice == 1) {
    head = head->next;
    free(head->prev);
    head->prev = NULL;
    printf("Removed head");
  } else if (choice == 2) {
    printf("Enter position you want to delete : ");
    scanf("%d", &dpos);

    temph = head;
    while (count < dpos - 1) {
      temph = temph->next;
      count++;
    }
    dnode = temph->next;
    dnode->next->prev = temph;
    temph->next = dnode->next;
    free(dnode);
  } else {
    tempt = *Ptrtail;
    *Ptrtail = tempt->prev;
    free(tempt);
    (*Ptrtail)->next = NULL;
  }
  return head;
}
