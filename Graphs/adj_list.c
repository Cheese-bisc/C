#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int vertex;
  struct node* next;
} node;

typedef struct graph {
  int vertex_nos;
  node** adj_list;
} graph;

node* createNode(int val) {
  node* newNode = malloc(sizeof(node));
  newNode->next = NULL;
  newNode->vertex = val;

  return newNode;
}

graph* createGraph(int num_of_vertices) {
  graph* Graph = malloc(sizeof(graph));
  Graph->vertex_nos = num_of_vertices;
  Graph->adj_list = malloc(num_of_vertices * sizeof(node*));

  for (int i = 0; i < num_of_vertices; i++)
    Graph->adj_list[i] = NULL;

  return Graph;
}

void addEdge(graph* G, int src, int dest) {
  node* newNode = createNode(dest);
  newNode->next = G->adj_list[src];
  G->adj_list[src] = newNode;
}

void print(graph* G) {
  for (int i = 0; i < G->vertex_nos; i++) {
    node* temp = G->adj_list[i];
    if (temp == NULL)
      continue;
    while (temp != NULL) {
      printf("%d -> ", temp->vertex);
      temp = temp->next;
    }
    printf("NULL\n");
  }
}

int main() {
  graph* G = createGraph(4);

  addEdge(G, 0, 1);
  addEdge(G, 0, 2);
  addEdge(G, 1, 2);
  addEdge(G, 2, 3);

  print(G);

  return 0;
}
