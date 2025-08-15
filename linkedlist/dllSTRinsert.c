#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int a;
    struct node *next;
    struct node *prev;
} node;
typedef struct headtail {
    node *head;
    node *tail;
} headtail;

headtail makedll(int n, headtail ht);
void printdll(headtail ht);
int main() {
  int n;
  printf("Enter number of nodes : ");
  scanf("%d", &n);

  // make dll
  headtail ht = makedll(n, ht);

  // print dll
  printdll(ht);

  return 0;
}
headtail makedll(int n, headtail ht) {
  node *head = NULL, *curr = NULL, *new = NULL;
  int count = 1;
  head = malloc(sizeof(node));
  printf("Enter integer at #%d :", count);
  scanf("%d", &head->a);
  head->next = NULL;
  head->prev = NULL;
  count++;
  curr = head;

  while (count <= n) {
    new = malloc(sizeof(node));
    printf("Enter integer at node #%d :", count);
    scanf("%d", &new->a);
    curr->next = new;
    new->next = NULL;
    new->prev = curr;
    curr = new;
    count++;
  }
  ht.head = head;
  ht.tail = new;

  return ht;
}
void printdll(headtail ht) {
  node *temp = ht.head;
  int count = 1;
  while (temp != NULL) {
    printf("Element at node #%d is : %d\n", count, temp->a);
    temp = temp->next;
  }
}
