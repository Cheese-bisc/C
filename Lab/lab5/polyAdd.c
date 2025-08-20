#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int coeff;
    int deg;
    struct node *link;
} node;
node *makell(int n);
node *add(int a, int b, node *head1, node *head2);
void print(node *head);

int main() {
  int a, b;
  printf("Enter number of terms in both polynomials : ");
  scanf("%d %d", &a, &b);

  // make ll
  printf("Enter details for 1st polynomial\n");
  node *head1 = makell(a);
  printf("Enter details for 2nd polynomial\n");
  node *head2 = makell(b);

  // find addition
  node *head3 = add(a, b, head1, head2);

  // print
  print(head3);

  return 0;
}
node *makell(int n) {
  node *head = malloc(sizeof(node));
  node *new = NULL, *curr = NULL;
  int count = 1;
  printf("Enter coeff and degree of node #%d : ", count);
  scanf("%d %d", &head->coeff, &head->deg);
  head->link = NULL;
  curr = head;
  count++;
  while (count <= n) {
    new = malloc(sizeof(node));
    printf("Enter coeff and degree of node #%d : ", count);
    scanf("%d %d", &new->coeff, &new->deg);
    new->link = NULL;
    curr->link = new;
    curr = new;
    count++;
  }
  return head;
}
node *add(int a, int b, node *head1, node *head2) {
  node *head3 = NULL;
  node *curr = NULL, *temp1 = head1, *temp2 = head2, *new = NULL;
  while (temp1 != NULL && temp2 != NULL) {
    if (head3 == NULL) { // first node
      head3 = malloc(sizeof(node));
      curr = head3;
    } else {
      curr->link = malloc(sizeof(node));
      curr = curr->link;
    }
    if (temp1->deg > temp2->deg) {
      curr->coeff = temp1->coeff;
      curr->deg = temp1->deg;
      temp1 = temp1->link;
    } else if (temp1->deg < temp2->deg) {
      curr->coeff = temp2->coeff;
      curr->deg = temp2->deg;
      temp2 = temp2->link;
    } else {
      curr->coeff = temp1->coeff + temp2->coeff;
      curr->deg = temp1->deg;
      temp1 = temp1->link;
      temp2 = temp2->link;
    }
    curr->link = NULL;
  }

  while (temp1 != NULL) {
    new = malloc(sizeof(node));
    new->coeff = temp1->coeff;
    new->deg = temp1->deg;
    new->link = NULL;
    curr->link = new;
    curr = new;
    temp1 = temp1->link;
  }
  while (temp2 != NULL) {
    new = malloc(sizeof(node));
    new->coeff = temp2->coeff;
    new->deg = temp2->deg;
    new->link = NULL;
    curr->link = new;
    curr = new;
    temp2 = temp2->link;
  }
  return head3;
}
void print(node *head) {
  node *temp = head;
  while (temp != NULL) {
    if (temp->deg != 0)
      printf("%dx^%d + ", temp->coeff, temp->deg);
    else
      printf("%d", temp->coeff);
    temp = temp->link;
  }
}
