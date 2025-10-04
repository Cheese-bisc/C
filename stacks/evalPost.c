#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct stack {
  int top, size;
  float* arr;
} stack;

void calcExpr(char* expr);
void push(stack* s1, float val);
float pop(stack* s1);

int main() {
  char* expr = "231*+9-"; // (2 + (3*1)) - 9 = -4
  calcExpr(expr);
  return 0;
}

void calcExpr(char* expr) {
  float ans, op1, op2;
  stack* s1 = malloc(sizeof(stack));
  s1->top = -1;
  s1->size = strlen(expr);
  s1->arr = malloc(s1->size * sizeof(float));

  int i = 0;
  while (expr[i] != '\0') {
    if (isdigit(expr[i])) {
      push(s1, expr[i] - '0'); // convert char to number
    } else {
      op1 = pop(s1);
      op2 = pop(s1);

      switch (expr[i]) {
      case '+':
        ans = op2 + op1;
        break;
      case '-':
        ans = op2 - op1;
        break;
      case '*':
        ans = op2 * op1;
        break;
      case '/':
        ans = op2 / op1;
        break;
      }
      push(s1, ans);
    }
    i++;
  }

  printf("Result = %.2f\n", pop(s1));
  free(s1->arr);
  free(s1);
}

void push(stack* s1, float val) {
  if (s1->top == s1->size - 1) {
    printf("Stack Overflow\n");
    exit(1);
  }
  s1->arr[++s1->top] = val;
}

float pop(stack* s1) {
  if (s1->top == -1) {
    printf("Stack Underflow\n");
    exit(1);
  }
  return s1->arr[s1->top--];
}
