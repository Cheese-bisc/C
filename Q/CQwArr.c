#include <stdio.h>
#include <stdlib.h>

typedef struct Q {
  int size, front, rear;
  int* arr;
} Q;

int isFull(Q* q);
int isEmpty(Q* q);
void enq(Q* q);
void deq(Q* q);

int main() {
  Q* q1 = malloc(sizeof(Q));
  q1->size = 7;
  q1->front = q1->rear = 0;
  q1->arr =
      malloc(sizeof(int) *
             (q1->size +
              1)); // add +1 here because when i check overflow , it checks if
                   // [rear+1] is front or not. So only n-1 slots are used. If i
                   // want to use all n slots , increase allocation by 1.

  int choice;
  while (1) {
    printf("----Enter choice ----\n1.Enqueue\n2.Dequeue\n3.Exit\n");
    scanf("%d", &choice);
    switch (choice) {
    case 1:
      enq(q1);
      break;
    case 2:
      deq(q1);
      break;
    case 3:
      exit(1);
      break;
    default:
      printf("Enter valid input");
    }
  }
}

int isFull(Q* q) {
  if ((q->rear + 1) % q->size == q->front)
    return 1;
  return 0;
}
int isEmpty(Q* q) {
  if (q->rear == q->front)
    return 1;
  return 0;
}

void enq(Q* q) {
  if (isFull(q)) {
    printf("Queue full!!\n");
    return;
  } else {
    int val;
    q->rear = (q->rear + 1) % q->size;
    printf("\nEnter value to queue : ");
    scanf("%d", &val);
    q->arr[q->rear] = val;
  }
  return;
}
void deq(Q* q) {
  if (isEmpty(q)) {
    printf("Queue empty !!\n");
    return;
  } else {
    q->front = (q->front + 1) % q->size;
    printf("\nDequeued %d", q->arr[q->front]);
  }
  return;
}
