#ifndef GRAPH_H
#define GRAPH_H

#include "queue.h"

class Graph {
    private:
        int NULL_EDGE: // constante para aresta nula
        int maxVertices;
        int numVertices;
        Vertex* vertices;
        int** edges; // matriz de adjacência
        bool* marks; // marks[i] indica se vertices[i] foi usado
        int getIndex(Vertex);
    public:
        Graph(int max = 50, int null = 0);
        ~Graph();

        void addVertex(Vertex);
        void addEdge(Vertex, Vertex, int);

        int getWeight(Vertex, Vertex);
        void getAdjacents(Vertex, Queue&);
        void clearMarks();
        void markVertex(Vertex);
        bool isMarked(Vertex);
        void printMatrix();
};

#endif