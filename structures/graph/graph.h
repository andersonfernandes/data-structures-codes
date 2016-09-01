#ifndef GRAPH_H
#define GRAPH_H

  typedef struct adj_list Adjlist;

  typedef struct graph Graph;

  Graph* create_graph();

  void add_edge(Graph *graph, int vertex1, int vertex2);

  void print_graph(Graph *graph);

  void dfs(Graph *graph, int source);

  void bfs(Graph *graph, int source);

#endif /* GRAPH_H */
