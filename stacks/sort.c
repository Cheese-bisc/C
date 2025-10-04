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

void push(stack* ptr, int val) {
  if (isFull(ptr))
    printf("Stack Overfloww.Cannot push %d to the stack", val);
  else {
    ptr->top++;
    ptr->arr[ptr->top] = val;
  }
  return;
}

void sort(stack* ptr) {
  for (int i = 0; i < ptr->top; i++) {
    for (int j = 0; j < ptr->top - i; j++) {
      if (ptr->arr[j] > ptr->arr[j + 1]) {
        int temp = ptr->arr[j];
        ptr->arr[j] = ptr->arr[j + 1];
        ptr->arr[j + 1] = temp;
      }
    }
  }
  return;
}

void pop(stack* ptr) {
  int val;
  if (isEmpty(ptr))
    printf("Stack Underfloww.");
  else {
    printf("Popped %d", ptr->top);
    ptr->top--;
  }
  return;
}

void print(stack* ptr) {
  int i = 0;
  while (i <= ptr->top) {
    printf("%d ", ptr->arr[i]);
    i++;
  }
  printf("\n");
  return;
}

int main() {
  int val, choice;
  stack* s1 = malloc(sizeof(stack));
  printf("Enter size of stack : ");
  scanf("%d", &s1->size);
  s1->top = -1;
  s1->arr = malloc(s1->size * sizeof(int));

  while (1) {
    printf("\n---Enter your "
           "choice---\n1.Push\n2.Pop\n3.Print\n4.Exit\n5.Sort\n->");
    scanf("%d", &choice);
    switch (choice) {
    case 1:
      printf("Enter element to push : ");
      scanf("%d", &val);
      push(s1, val);
      break;
    case 2:
      pop(s1);
      break;
    case 3:
      printf("\n");
      print(s1);
      break;
    case 4:
      exit(0);
    case 5:
      sort(s1);
      break;
    default:
      printf("Enter valid arg");
    }
  }
  return 0;
}
