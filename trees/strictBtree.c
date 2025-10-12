#include <math.h>
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
int height(node* root);
int totalNodes(node* root);
void StrictTree(node* root);

int main() {
  node* root = createTree();

  StrictTree(root);
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
int height(node* root) {
  if (root == NULL)
    return 0;
  int leftCnt = height(root->left);
  int rightCnt = height(root->right);

  return (leftCnt > rightCnt ? leftCnt : rightCnt) + 1;
}
int totalNodes(node* root) {
  if (root == NULL)
    return 0;
  int leftCnt = totalNodes(root->left);
  int rightCnt = totalNodes(root->right);

  return leftCnt + rightCnt + 1;
}
void StrictTree(node* root) {
  int Treeheight = height(root);
  int totalnodes = totalNodes(root);

  int StrictNodes = pow(2, Treeheight) - 1;
  printf("%s", (StrictNodes > totalnodes ? "Not StrictTree" : "StrictTree"));
  return;
}
