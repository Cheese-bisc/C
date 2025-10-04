#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

typedef struct node {
  int data;
  struct node* link;
} node;
typedef struct fr {
  node *front, *rear;
} fr;

fr* enq(int val, fr* address);
fr* deq(fr* address);

int main() {
  int choice;
  fr* fr1 = malloc(sizeof(fr));
  fr1->front = NULL;
  fr1->rear = NULL;
  while (1) {
    printf("Enter choice :\n1.Enqueue\n2.Dequeue\n3.Exit\n");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
      printf("Enter value to enqueue : ");
      int val;
      scanf("%d", &val);
      enq(val, fr1);
      break;
    case 2:
      deq(fr1);
      break;
    case 3:
      exit(1);
      break;
    default:
      printf("Enter valid input");
      break;
    }
  }
}

fr* enq(int val, fr* address) {
  node* new = malloc(sizeof(node));
  if (new == NULL) {
    printf("Not enuf memowy !!");
  } else {
    new->data = val;
    new->link = NULL;
    if (address->front == NULL) {
      address->front = address->rear = new;
    } else {
      address->rear->link = new;
      address->rear = new;
    }
  }
  return address;
}
fr* deq(fr* address) {
  node* temp = address->front;
  if (temp == NULL) {
    printf("No one in queue !!\n");
  } else {
    address->front = address->front->link;
    if (address->front == NULL)
      address->rear = NULL;
    printf("Dequeued %d \n", temp->data);
    free(temp);
    temp = NULL;
  }
  return address;
}
