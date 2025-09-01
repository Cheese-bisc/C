#include <stdio.h>
#include <stdlib.h>

typedef struct stack {
  int size, top;
  int* arr;
} stack;

int isEmpty(stack* ptr) {
  if (ptr->top == -1)
    return 1;
  return 0;
}
int isFull(stack* ptr) {
  if (ptr->top == ptr->size - 1)
    return 1;
  return 0;
}

int main() {
  stack* s1;
  printf("Enter size of stack : ");
  scanf("%d", &s1->size);
  s1->top = -1;
  s1->arr = malloc(s1->size * sizeof(stack));

  return 0;
}
