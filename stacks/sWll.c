#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *link;
} node;
node *head = NULL, *curr = NULL;

void push();
void pop();
void print();
int main() {
  int choice;
  while (1) {
    printf("\nSelect Option --\n(1)Push\n(2)Pop\n(3)Print\n(4)Exit\n-> ");
    scanf("%d", &choice);
    switch (choice) {
    case 1:
      push();
      break;
    case 2:
      pop();
      break;
    case 3:
      print();
      break;
    case 4:
      exit(0);
      break;
    default:
      printf("Enter valid cmd.");
      break;
    }
  }
}
void push() {
  printf("Enter element to push : ");
  if (head == NULL) {
    head = malloc(sizeof(node));
    scanf("%d", &head->data);
    head->link = NULL;
  } else {
    curr = malloc(sizeof(node));
    scanf("%d", &curr->data);
    curr->link = head;
    head = curr;
  }
  return;
}
void print() {
  printf("\n");
  node *temp = head;
  while (temp != NULL) {
    printf("%d ", temp->data);
    temp = temp->link;
  }
  printf("\n");
  return;
}
void pop() {
  printf("\n");
  if (head == NULL) {
    printf("Stack Underflow");
    return;
  } else {
    node *temp = head;
    head = head->link;
    printf("Popped %d", temp->data);
    free(temp);
  }
  printf("\n");
  return;
}
