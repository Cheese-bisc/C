#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int val;
    struct node *prev;
    struct node *next;
} node;
typedef struct headtail {
    node *head;
    node *tail;
} headtail;

headtail *makedll(int n, headtail *ht);
void printdll(headtail *ht);
headtail *delete(headtail *ht);

int main() {
  int n;
  printf("Enter number of nodes : ");
  scanf("%d", &n);

  // make dll
  headtail *ht1 = malloc(sizeof(node));
  makedll(n, ht1);

  // delete
  delete(ht1);

  // print
  printf("\n");
  printdll(ht1);

  return 0;
}
headtail *makedll(int n, headtail *ht) {
  int count = 1;
  node *head = NULL, *curr = NULL, *new = NULL;
  head = malloc(sizeof(node));
  curr = head;
  curr->next = NULL;
  curr->prev = NULL;
  printf("Enter integer at #%d node :", count);
  scanf("%d", &curr->val);
  count++;

  while (count <= n) {
    new = malloc(sizeof(node));
    new->next = NULL;
    printf("Enter integer at node #%d : ", count);
    scanf("%d", &new->val);
    new->prev = curr;
    curr->next = new;
    curr = new;
    count++;
  }

  ht->head = head;
  ht->tail = curr;
  return ht;
}
void printdll(headtail *ht) {
  node *temph = ht->head, *tempt = ht->tail;
  int dir;
  printf("\nEnter 1 to print from front and 2 to print from behind :\n");
  scanf("%d", &dir);

  if (dir == 1) {
    printf("Printing from head\n");
    while (temph != NULL) {
      printf("%d ", temph->val);
      temph = temph->next;
    }
  } else if (dir == 2) {
    printf("Printing from tail\n");
    while (tempt != NULL) {
      printf("%d ", tempt->val);
      tempt = tempt->prev;
    }
  }
  return;
}
headtail *delete(headtail *ht) {
  int dpos, count = 1, choice;
  node *temph = ht->head, *tempt = ht->tail;
  printf("\nWhere do you want to delete?\nPress 1 for head, 2 for a positon "
         "and 3 for tail\n");
  scanf("%d", &choice);

  if (choice == 1) {
    ht->head = temph->next;
    ht->head->prev = NULL;
    free(temph);
  } else if (choice == 2) {
    printf("Enter the delete position : ");
    scanf("%d", &dpos);
    while (count < dpos - 1) {
      temph = temph->next;
      count++;
    }
    node *delnode = temph->next;
    temph->next = delnode->next;
    delnode->next->prev = temph;
    free(delnode);
  } else {
    ht->tail = tempt->prev;
    ht->tail->next = NULL;
    free(tempt);
  }
  return ht;
}
