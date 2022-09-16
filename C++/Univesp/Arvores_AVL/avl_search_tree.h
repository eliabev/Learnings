#include <cstddef>
#include <iostream>
#include "Aluno.h"

struct Nodetype {
    Aluno aluno;
    int fatorB;
    Nodetype* esquerda;
    Nodetype* direita;
};

class AVLSearchTree {
    public:
        AVLSearchTree() {
            root = NULL;
        }
        ~AVLSearchTree() {
            destroyTree(root);
        }
        bool isEmpty() const;
        bool isFull() const;
        void retrieveAluno(Aluno& item, bool& found) const {
            retrieveAluno(root, item, found);
        }
        void insertAluno(Aluno item) {
            bool isTaller;
            insertAluno(root, item, isTaller);
        }
        void deleteAluno(int item) {
            bool isShorter;
            deleteAluno(root, item, isShorter);
        }
        void printPreOrder() const {
            printPreOrder(root);
        }
        void printInOrder() const {
            printInOrder(root);
        }
        void printPosOrder() const {
            printPosOrder(root);
        }

    private:
        void destroyTree(Nodetype*& tree);
        void retrieveAluno(NodeType* tree, Aluno& item, bool& found) const;
        void insertAluno(Nodetype*& tree, Aluno item, bool& isTaller);
        void deleteAluno(Nodetype*& tree, int item, bool& isShorter);
        void deleteNode(Nodetype*& tree, bool& isShorter);
        void getSucessor(Nodetype* tree, Aluno& data);
        void printPreOrder(Nodetype* tree) const;
        void printInOrder(Nodetype* tree) const;
        void printPosOrder(Nodetype* tree) const;

        void rotateToLeft(Nodetype*& tree) const;
        void rotateToRight(Nodetype*& tree) const;
        void rotateToLeftAndRight(Nodetype*& tree) const;
        void rotateToRightAndLeft(Nodetype*& tree) const;

        void performRotations(Nodetype*& tree) const;

        Nodetype* root;
};