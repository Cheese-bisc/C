#include <stdio.h>
#include <stdlib.h>
#include <stdnoreturn.h>

// Define node structure
typedef struct node {
  int data;
  struct node* left;
  struct node* right;
} node;

// Create a new node
node* createnode(int value);
node* createTree();

int main() {
  node* root = createTree();

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
int equal(node* root1, node* root2) {
  if (root1 == NULL && root2 == NULL)
    return 1;
  if (root1 == NULL || root2 == NULL)
    return 0;
  if (root1->data != root2->data)
    return 0;

  return equal(root1->left, root2->left) && equal(root1->right, root2->right);
}
