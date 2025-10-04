#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct stack {
  int size, top;
  char* operands;
} stack;

int isFull(stack* ptr);
int isEmpty(stack* ptr);
void push(stack* ptr, int val);
void pop(stack* ptr);
char* inftopos(char* infix);
int isOperator(char* op);

int main() {
  stack* s1;
  char* infix = "a+b*c-d^e";
}
int isFull(stack* ptr) {
  if (ptr->top == ptr->size - 1)
    return 1;
  return 0;
}
int isEmpty(stack* ptr) {
  if (ptr->top == -1)
    return 1;
  return 0;
}
void push(stack* ptr, int val) {
  if (isFull(ptr)) {
    printf("Stack overfloww. Cannot push %d to stack", val);
    return;
  } else {
    ptr->top++;
    ptr->operands[ptr->top] = val;
  }
  return;
}
void pop(stack* ptr) {
  if (isEmpty(ptr)) {
    printf("Stack underflow.");
    return;
  } else {
    printf("Popped %d from satck", ptr->top);
    ptr->top--;
  }
  return;
}
char* inftopos(char* infix) {
  stack* s1;
  s1->size = 100;
  s1->top = -1;
  s1->operands = malloc(s1->size * sizeof(char));

  char* postfix = malloc((strlen(infix) - 1) * sizeof(char));
  int i, j;
  while (i != '\0') {
  }
}
int isOperator(char* op) {
  switch (op) {
  case '+':
  case -:
    return 1;
  case *:
  case /:
    return 2;
  case ^:
    return 3;
  }
}
