#include <stdio.h>
#include <stdlib.h>

typedef struct Queue {
  int rear, front, size;
  int* arr;
} Q;

int isEmpty(Q* q) {
  if (q->rear == q->front)
    return 1;
  return 0;
}
int isFull(Q* q) {
  if (q->rear == q->size - 1)
    return 1;
  return 0;
}
void enq(Q* q, int val) {
  if (isFull(q)) {
    printf("Cannot enqueue!");
    return;
  }
  q->arr[++q->rear] = val;

  return;
}
void deq(Q* q) {
  if (isEmpty(q)) {
    printf("Queue is emptyy!");
    return;
  }
  int val;
  q->arr[q->front++] = val;
  printf("Dequeud val");

  return;
}
