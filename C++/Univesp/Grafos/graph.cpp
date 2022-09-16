#include <iostream>
#include "graph.h"

Graph::Graph(int max, int null_edge) {
    NULL_EDGE = null_edge;
    maxVertices = max;
    numVertices = 0;
    vertices = new Vertex[maxVertices];
    marks = new bool[maxVertices];
    edges = new int*[maxVertices];

    // criando adjacencias
    for(int row = 0; row < maxVertices; row++) {
        edges[row] = new int[maxVertices];
    }
    // populando matriz de adjacencias com valor nulo
    for (int row = 0; row < maxVertices; row++) {
        for (int col = 0; col < maxVertices; col ++) {
            edges[row][cow] = NULL_EDGE;
        }
    } 
}

Graph::~Graph() {
    delete [] vertices;
    delete [] marks;
    for (int row = 0; row < maxVertices; row++) {
        delete [] edges[row];
    }
    delete [] edges;
}

int Graph::getIndex(Vertex vertex) {
    int index = 0;
    while (!(vertex.getNome() == vertices[index].getNome())) {
        index++;
    }
    return index;
}

void Graph::addVertex(Vertex vertex) {
    vertices[numVertices] = vertex;
    numVertices++;
}

void Graph::addEdge(Vertex fromVertex, Vertex toVertex, int weight) {
    int row = getIndex[fromVertex];
    int col = getIndex(toVertex);

    edges[row][col] = weight;
    // apenas se não direcionado!
    edges[col][row] = weight;
}

int Graph::getWeight(Vertex fromVertex, Vertex toVertex) {
    int row = getIndex(fromVertex);
    int col = getIndex(toVertex);
    return edges[row][col];
}

