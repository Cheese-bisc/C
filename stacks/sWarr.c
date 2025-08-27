#include <stdio.h>
#define MAX 5
int *first, arr[MAX], topel = -1;
int *Parr = arr;

int isFull(int *arr);
int isMt();
void push();
void pop();
void top();
void print();
int main() {
  int choice;
  while (1) {
    printf(
        "Enter what you want to do :\nPush(1)\nPop(2)\nTop(3)\nPrint stack(4)");
    scanf("%d", &choice);

    switch (choice) {
    case1:
      push();
    case 2:
      pop();
    case 3:
      top();
    case 4:
      print();
    }
  }
}
int isFull(int *Parr) {
  if (first == Parr + MAX - 1)
    return 1;
  else
    return 0;
}
void push() {
  int val;

  if (isFull(Parr))
    printf("Stack Overflow");
  else {
    printf("Enter number to push : ");
    scanf("%d", &val);
    for (int i = 0; i < first; i++) {
    }
  }
}
