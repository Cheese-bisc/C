#include <stdio.h>
#include <stdlib.h>
typedef struct node {
  int a;
  struct node* prev;
  struct node* next;
} node;

node* makedll(int n,
              node** Ptrtail); // making a double pointer so that i can get both
                               // head and tail of dll from function
void printdll(node* head, node* tail);
node* insert(int n, int insertPos, node* head, node** Ptrtail);

int main() {
  int n;
  printf("Enter number of nodes :");
  scanf("%d", &n);

  // make dll
  node* tail = NULL;
  node* head = makedll(
      n, &tail); // I send the address of tail into fxn as Ptrtail which i set
                 // to the last node. So works by just returning head
  printf("\n");

  // inserting
  int insPos;
  printf("Enter insert Position :");
  scanf("%d", &insPos);
  head = insert(n, insPos, head, &tail);
  n++;

  // print dll
  printdll(head, tail);
}

node* makedll(int n, node** Ptrtail) {
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

void printdll(node* head, node* tail) {
  node* temp = head;
  int count = 1;
  while (temp != NULL) {
    printf("Element at node #%d is : %d\n", count, temp->a);
    temp = temp->next;
    count++;
  }
  return;
}
node* insert(int n, int insertPos, node* head, node** Ptrtail) {
  node* new = malloc(sizeof(node));
  printf("Enter data for the new node : ");
  scanf("%d", &new->a);
  new->prev = NULL;
  new->next = NULL;

  // Insert at beginning
  if (insertPos == 1) {
    new->next = head;
    head->prev = new;
    head = new;
    return head;
  }

  // Insert at end
  if (insertPos == n + 1) {
    new->prev = *Ptrtail;
    (*Ptrtail)->next = new;
    *Ptrtail = new;
    return head;
  }

  // Insert in the middle
  node* temp = NULL;
  if (insertPos <= n / 2) {
    int count = 1;
    temp = head;
    while (count < insertPos - 1) {
      temp = temp->next;
      count++;
    }
    new->next = temp->next;
    new->prev = temp;
    temp->next->prev = new;
    temp->next = new;
    printf("Inserted from front\n");
  } else {
    int count = n;
    temp = *Ptrtail;
    while (count > insertPos) {
      temp = temp->prev;
      count--;
    }
    new->next = temp;
    new->prev = temp->prev;
    temp->prev->next = new;
    temp->prev = new;
    printf("Inserted from behind\n");
  }

  return head;
}
