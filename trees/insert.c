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
void insert(node* root, int key);
void inorder(node* root);

int main() {
  node* root = createTree();

  int key;
  printf("Enter key value : ");
  scanf("%d", &key);
  insert(root, key);

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

void insert(node* root, int key) {
  node* prev = NULL;
  node* ptr = createnode(key);
  while (root != NULL) {
    prev = root;
    if (root->data == key) {
      printf("Cannot insert %d in this tree.", key);
      return;
    } else if (root->data < key)
      root = root->right;
    else
      root = root->left;
  }
  if (prev->data < key)
    prev->right = ptr;
  else
    prev->left = ptr;

  return;
}
void inorder(node* root) {
  printf("\n");
  if (root == NULL)
    return;
  inorder(root->left);
  printf("%d ", root->data);
  inorder(root->right);
}
