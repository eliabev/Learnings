#ifndef VERTEX_H
#define VERTEX_H

#include <iostream>

using namespace std;

class Vertex {
    public:
        Vertex() {
            this->nome = "";
        }
        Vertex(string nome) {
            this->nome = nome;
        }
        string getNome() const {
            return nome;
        }
    private:
        string nome;
};

#endif