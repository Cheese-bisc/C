#include <stdio.h>
#include <stdlib.h>
typedef struct node {
  int a;
  struct node* prev;
  struct node* next;
} node;
typedef struct headtail {
  node* head;
  node* tail;
} headtail;
headtail* makedll(int n, headtail* ht);
void print(headtail* ht);
headtail* insert(headtail* ht, int n);

int main() {
  int n;
  printf("Enter number of nodes : ");
  scanf("%d", &n);

  // make dll
  headtail* ht1 = malloc(sizeof(headtail));
  makedll(n, ht1);

  // insert
  ht1 = insert(ht1, n);
  printf("\n");

  // print
  print(ht1);

  return 0;
}
headtail* makedll(int n, headtail* ht) {
  int count = 1;
  node *head = NULL, *curr = NULL, *new = NULL;
  head = malloc(sizeof(node));
  printf("Enter integer at node #%d : ", count);
  scanf("%d", &head->a);
  head->prev = NULL;
  head->next = NULL;
  curr = head;
  count++;
  while (count <= n) {
    new = malloc(sizeof(node));
    new->next = NULL;
    new->prev = curr;
    curr->next = new;
    printf("Enter integer at node #%d : ", count);
    scanf("%d", &new->a);
    curr = new;
    count++;
  }
  ht->head = head;
  ht->tail = curr;
  return ht;
}
void print(headtail* ht) {
  node* temp = ht->head;
  int count = 1;
  while (temp != NULL) {
    printf("Element at node #%d is : %d\n", count, temp->a);
    temp = temp->next;
    count++;
  }
  return;
}
headtail* insert(headtail* ht, int n) {
  node* temp = NULL;
  int newnode, count = 1;
  printf("Enter the number of nodes : ");
  scanf("%d", &newnode);
  headtail* iht = malloc(sizeof(headtail));
  iht = makedll(newnode, iht);
  int ipos;
  printf("Enter position to insert :");
  scanf("%d", &ipos);

  // insert at first
  if (ipos == 1) {
    temp = iht->tail;
    temp->next = ht->head;
    ht->head->prev = temp;
    ht->head = iht->head;
  }
  // insert at last
  else if (ipos == n + 1) {
    temp = iht->head;
    ht->tail->next = temp;
    temp->prev = ht->tail;
    ht->tail = iht->tail;
  }
  // insert at middle
  else {
    temp = ht->head;
    while (count < ipos - 1) {
      temp = temp->next;
      count++;
    }
    iht->head->prev = temp;
    iht->tail->next = temp->next;
    temp->next = iht->head;
    iht->tail->next->prev = iht->tail;
  }
  return ht;
}
