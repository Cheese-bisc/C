#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int data;
  struct node *left, *right;
} node;

node* createTree(node* root);
node* createNode(node* root);

int main() {
  node* root = createTree(root);
  return 0;
}

node* createTree(node* root) {
  root = createNode(root);
  return root;
}
node* createNode(node* root) {
  root = malloc(sizeof(node));
  if (!root) {
    printf("No memowy");
    return NULL;
  }
  printf("Enter value : ");
  scanf("%d", &root->data);
  root->left = NULL;
  root->right = NULL;

  return root;
}
