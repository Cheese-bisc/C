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
node* search(node* root, int key);
node* delete(node* root, int key);
void inorder(node* root);
node* inOrderPred(node* root);

int main() {
  node* root = createTree();

  int key;
  printf("Enter key value : ");
  scanf("%d", &key);

  inorder(root);
  root = delete(root, key);
  printf("\n");
  inorder(root);

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

node* delete(node* root, int key) {
  node* iPre = NULL;
  if (root == NULL)
    return NULL;
  if (root->data > key)
    root->left = delete(root->left, key);
  else if (root->data < key)
    root->right = delete(root->right, key);
  else {
    if (root->left == NULL && root->right == NULL) {
      free(root);
      return NULL;
    } else if (root->left == NULL && root->right != NULL) {
      node* temp = root->right;
      free(root);
      return temp;
    } else if (root->right == NULL && root->left != NULL) {
      node* temp = root->left;
      free(root);
      return temp;
    } else {
      iPre = inOrderPred(root);
      root->data = iPre->data;
      root->left = delete(root->left, iPre->data);
    }
  }
  return root;
}

node* inOrderPred(node* root) {
  root = root->left;
  while (root->right != NULL) {
    root = root->right;
  }
  return root;
}
void inorder(node* root) {
  if (root == NULL)
    return;
  inorder(root->left);
  printf("%d ", root->data);
  inorder(root->right);
}
