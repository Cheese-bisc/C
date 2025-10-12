#include <stdio.h>
#include <stdlib.h>

// Define node structure
typedef struct node {
  int data;
  struct node* left;
  struct node* right;
} node;
typedef struct count {
  int count, maxCount;
} count;

// Create a new node
node* createnode(int value);
node* createTree();
int height(node* root, count* c);

int main() {
  node* root = createTree();

  count* c = malloc(sizeof(count));
  c->count = -1;
  c->maxCount = 0;
  c->maxCount = height(root, c);
  printf("%d", c->maxCount);

  return 0;
}

node* createnode(int value) {
  node* newnode = malloc(sizeof(node));
  if (!newnode) {
    printf("Memory error\n");
    return NULL;
  }
  newnode->data = value;
  newnode->left = newnode->right = NULL;
  return newnode;
}

node* createTree() {
  node* root = createnode(5);

  root->left = createnode(3);
  root->right = createnode(7);

  root->left->left = createnode(1);
  root->left->right = createnode(4);

  root->right->left = createnode(6);
  root->right->right = createnode(10);

  root->right->right->left = createnode(9);

  return root;
}
int height(node* root, count* c) {
  if (root == NULL)
    return 0;
  c->count++;
  if (c->count > c->maxCount)
    c->maxCount = c->count;
  height(root->left, c);
  height(root->right, c);

  c->count--;
  return c->maxCount + 1;
}
