#include <stdio.h>
#include <stdlib.h>

typedef struct Q {
  int size;
  int first, last;
  int* arr;
} Q;

int isFull(Q* q);
int isEmpty(Q* q);
void enq(Q* q);
void deq(Q* q);

int main() {
  Q* q = malloc(sizeof(Q));
  q->size = 100;
  q->first = q->last = -1;
  q->arr = malloc(sizeof(int) * q->size);

  int choice;
  while (1) {
    printf("\nEnter your choice :\n1.Enqueue\n2.Dequeue\n3.Exit");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
      enq(q);
      break;
    case 2:
      deq(q);
      break;
    case 3:
      exit(1);
      break;
    default:
      printf("Enter valid choice");
    }
  }

  return 0;
}

int isFull(Q* q) {
  if (q->last == q->size - 1)
    return 1;
  return 0;
}
int isEmpty(Q* q) {
  if (q->last == q->first)
    return 1;
  else
    return 0;
}

void deq(Q* q) {
  if (isEmpty(q)) {
    printf("Queue is empty !!");
    return;
  } else {
    q->first++;
    int a = q->arr[q->first];
    printf("Dequeueing %d", a);
  }
  return;
}

void enq(Q* q) {
  if (isFull(q)) {
    printf("This queue is full");
    return;
  } else {
    int val;
    printf("Enter value into queue");
    scanf("%d", &val);
    q->arr[++q->last] = val;
  }
  return;
}
