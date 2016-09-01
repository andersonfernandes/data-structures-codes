#include <stdio.h>
#include <stdlib.h>
#include "graph.h"

int main() {
  Graph *graph = create_graph();

  add_edge(graph, 6, 4);
  add_edge(graph, 6, 9);
  add_edge(graph, 9, 1);
  add_edge(graph, 9, 2);
  add_edge(graph, 1, 5);
  add_edge(graph, 1, 3);

  print_graph(graph);

  dfs(graph, 6);

  return 0;
}
