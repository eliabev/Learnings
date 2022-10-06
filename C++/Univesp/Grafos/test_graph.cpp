#include "graph.h"
#include <iostream>

int main() {
  Graph graph;
  Vertex a = Vertex("a"); graph.addVertex(a);
  Vertex b = Vertex("b"); graph.addVertex(b);
  Vertex c = Vertex("c"); graph.addVertex(c);
  Vertex d = Vertex("d"); graph.addVertex(d);
  
  graph.addEdge(a, b, 1);  graph.addEdge(a, c, 1);
  graph.addEdge(b, d, 1);  graph.addEdge(c, a, 1);
  graph.addEdge(c, b, 1);  graph.addEdge(c, d, 1);
  graph.addEdge(d, c, 1);

  float* pageRanks = new float[4];
  graph.getPageRanks(pageRanks);

  graph.printMatrix(); 
  std::cout << std::endl;
}
