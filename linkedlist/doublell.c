#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int a;
    struct node *prev;
    struct node *next;
} node;
node *makedll(int n,
              node **Ptrtail); // making a double pointer so that i can get both
                               // head and tail of dll from function
void printdll(node *head, node *tail);
struct dll returnht(int n);

int main() {
  int n;
  printf("Enter the number of nodes : ");
  scanf("%d", &n);

  // make dll
  node *tail = NULL;
  node *head = makedll(
      n, &tail); // I send the address of tail into fxn as Ptrtail which i set
                 // to the last node. So works by just returning head
  printf("\n");
  // print dll
  printdll(head, tail);
}

node *makedll(int n, node **Ptrtail) {
  node *head = NULL, *new = NULL, *curr = NULL;
  int count = 1;
  head = malloc(sizeof(node));
  printf("Enter integer at #%d : ", count);
  scanf("%d", &head->a);
  head->prev = NULL;
  head->next = NULL;
  curr = head;
  count++;
  while (count <= n) {
    new = malloc(sizeof(node));
    printf("Enter integer at #%d : ", count);
    scanf("%d", &new->a);
    curr->next = new;
    new->prev = curr;
    new->next = NULL;
    curr = new;
    count++;
  }
  *Ptrtail = curr;
  curr = NULL;
  return head;
}

void printdll(node *head, node *tail) {
  node *temp = tail;
  int count = 1;
  while (temp != NULL) {
    printf("Element at node #%d is : %d\n", count, temp->a);
    temp = temp->prev;
  }
  return;
}
