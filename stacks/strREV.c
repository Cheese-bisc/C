#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct stack {
  int size, top;
  char* arr;
} stk;

void push(stk* ptr, char val);
void pop(stk* ptr);

int main() {
  char* ch = "Hello";
  stk* strrev = malloc(strlen(ch) * sizeof(char));
  strrev->top = -1;
  strrev->size = strlen(ch);
  strrev->arr = malloc(sizeof(char) * strrev->size);

  int i = 0;
  while (ch[i] != '\0') {
    push(strrev, ch[i]);
    i++;
  }

  i = strrev->size;
  while (strrev->top != -1) {
    pop(strrev);
    i--;
  }
  return 0;
}
void push(stk* ptr, char val) {
  ptr->top++;
  ptr->arr[ptr->top] = val;
  return;
}
void pop(stk* ptr) {
  printf("%c ", ptr->arr[ptr->top]);
  ptr->top--;
  return;
}
