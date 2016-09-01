#include <stdio.h>
#include <stdlib.h>
#include "graph.h"

#define MAX_SIZE 20

struct adj_list {
  int item;
  Adjlist *next;
};

struct graph {
  Adjlist *vertices[MAX_SIZE];
  short visited[MAX_SIZE];
};

Graph* create_graph() {
  Graph *graph = malloc(sizeof(Graph));

  int i;
  for(i = 1; i < MAX_SIZE; ++i) {
    graph->vertices[i] = NULL;
    graph->visited[i] = 0;
  }

  return graph;
}

Adjlist* create_adjlist(int item) {
  Adjlist *adjlist = (Adjlist*) malloc(sizeof(Adjlist));
  adjlist->item = item;
  adjlist->next = NULL;

  return adjlist;
}

void add_edge(Graph *graph, int vertex1, int vertex2) {
  Adjlist *vertex = create_adjlist(vertex2);
  vertex->next = graph->vertices[vertex1];
  graph->vertices[vertex1] = vertex;

  vertex = create_adjlist(vertex1);
  vertex->next = graph->vertices[vertex2];
  graph->vertices[vertex2] = vertex;
}

void print_graph(Graph *graph) {
  int i;

  for(i = 1; i < MAX_SIZE; ++i) {
    printf(": %d ", i);

    Adjlist *adjlist = graph->vertices[i];
    while(adjlist != NULL) {
      printf("-> %d ", adjlist->item);

      adjlist = adjlist->next;
    }
    printf("\n");
  }
}

void dfs(Graph *graph, int source) {
  graph->visited[source] = 1;
  printf("%d\n", source);

  Adjlist *adjlist = graph->vertices[source];
  while (adjlist != NULL) {
    if (!graph->visited[adjlist->item]) {
    dfs(graph, adjlist->item);
    }

    adjlist = adjlist->next;
  }
}
