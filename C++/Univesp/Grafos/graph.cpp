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
        for (int col = 0; col < maxVertices; col ++) {
            edges[row][col] = NULL_EDGE;
        }
    }
    // populando matriz de adjacencias com valor nulo
    // for(int row = 0; row < maxVertices; row++) {
    //     for (int col = 0; col < maxVertices; col ++) {
    //         edges[row][col] = NULL_EDGE;
    //     }
    // } 
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
    while(!(vertex.getNome() == vertices[index].getNome())) {
        index++;
    }
    return index;
}

void Graph::addVertex(Vertex vertex) {
    vertices[numVertices] = vertex;
    numVertices++;
}

void Graph::addEdge(Vertex fromVertex, Vertex toVertex, int weight) {
    int row = getIndex(fromVertex);
    int col = getIndex(toVertex);

    edges[row][col] = weight;
    // apenas se não direcionado!
    // edges[col][row] = weight;
}

int Graph::getWeight(Vertex fromVertex, Vertex toVertex) {
    int row = getIndex(fromVertex);
    int col = getIndex(toVertex);
    return edges[row][col];
}

void Graph::getAdjacents(Vertex vertex, Queue &adjVertices) {
    int fromIndex;
    int toIndex;
    fromIndex = getIndex(vertex);
    for(toIndex = 0; toIndex < numVertices; toIndex++) {
        if(edges[fromIndex][toIndex] != NULL_EDGE) {
            adjVertices.enqueue(vertices[toIndex]);
        }
    }
}
void Graph::clearMarks() {
    for(int i = 0; i < numVertices; i++) {
        marks[i] = false;
    }
}

void Graph::markVertex(Vertex vertex) {
    int index = getIndex(vertex);
    marks[index] = true;
}

bool Graph::isMarked(Vertex vertex) {
    int index = getIndex(vertex);
    return marks[index];
}

void Graph::printMatrix() {
    for(int i = 0; i < numVertices; i++) {
        for(int j = 0; j < numVertices; j++) {
            std::cout << edges[i][j] << ", ";
        }
        std::cout << std::endl;
    }
}

void Graph::getPageRanks(float* pageRanks) {
    int* outputDegree = new int[numVertices];
    for(int = 0; i < numVertices; i++) {
        outputDegree[i] = 0;
        for(int j = 0; j < numVertices; j++) {
            if(edges[i][j] != NULL_EDGE) {
                outputDegree[i] += 1;
            }
        }
    }

    float* pr_previous = new float[numVertices];
    float* pr = new float[numVertices];

    for(int i = 0; i < numVertices; i++) {
        pr_previous = 1.0 / numVertices;
    }

    float d = .85;
    for(int numIter = 0; numIter < 100; numIter++) {
        pr[i] = 0;
        for(int i = 0; i < numVertices; j++) {
            if(edges[j][i] != NULL_EDGE) {
                pr[i] += pr_previous[j]/outputDegree[j];
            }
        }
        pr[i] = (1-d)/numVertices + d*pr[i];
    }

    for(int i = 0; i < numVertices; i++) {
        pr_previous[i] = pr[i]
    }
}