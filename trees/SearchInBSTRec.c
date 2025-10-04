#include <stdio.h>
#include <stdlib.h>

// Define node structure
typedef struct node {
  int data;
  struct node* left;
  struct node* right;
} node;

// Create a new node
node* createnode(int value);
node* createTree();
node* search(node* root, int key);

int main() {
  node* root = createTree();
  int key;
  printf("Enter key value : ");
  scanf("%d", &key);
  node* SearchAdd = search(root, key);
  printf("%p", SearchAdd);
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
  node* root = createnode(4);

  root->left = createnode(2);
  root->right = createnode(5);

  root->left->left = createnode(1);
  root->left->right = createnode(3);

  root->right->left = createnode(5);
  root->right->right = createnode(7);

  return root;
}
node* search(node* root, int key) {
  if (root == NULL)
    return NULL;
  if (root->data == key)
    return root;
  else if (root->data > key)
    return search(root->left, key);
  else if (root->data < key)
    return search(root->right, key);
  else
    printf("Element not found");
  return NULL;
}
