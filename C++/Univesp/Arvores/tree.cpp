#include "tree.h"

void Tree::destroyTree(NodeType*& tree) {
    if(tree != NULL) {
        destroyTree(tree->esquerda);
        destroyTree(tree->direita);
        delete tree;
    }
}

bool Tree::isEmpty() const {
    return root == NULL;
}

bool Tree::isFull() const {
    NodeType* location;
    try {
        location = new NodeType;
        delete location;
        return false;
    } catch(std::bad_alloc exception) {
        return true;
    }
}

void Tree::retrieveAluno(NodeType* tree, Aluno& aluno, bool& found) const {
    
    if(tree == NULL) {
        found = false;
    } else {
    
        if(aluno.getRa() < tree->aluno.getRa()) {
            retrieveAluno(tree->esquerda, aluno, found);
        }
        
        if(aluno.getRa() > tree->aluno.getRa()) {
            retrieveAluno(tree->direita, aluno, found);
        }
        
        if(aluno.getRa() == tree->aluno.getRa()) {
            aluno = tree->aluno;
            found = true;
        }
    }
}

void Tree::insertAluno(NodeType*& tree, Aluno aluno) {
    if (tree == NULL) {
        tree = new NodeType;
        tree->direita = NULL;
        tree->esquerda = NULL;
        tree->aluno = aluno;
    } else if (aluno.getRa() < tree->aluno.getRa()) {
        insertAluno(tree->esquerda, aluno);
    } else {
        insertAluno(tree->direita, aluno);
    }
}

void Tree::deleteAluno(NodeType*& tree, int aluno) {
    if (aluno < tree->aluno.getRa()) {
        deleteAluno(tree->esquerda, aluno);
    }
    if(aluno > tree->aluno.getRa()) {
        deleteAluno(tree->direita, aluno);
    }
    if(aluno == tree->aluno.getRa()) {
        deleteNode(tree);
    }
}

void Tree::deleteNode(NodeType*& tree) {
    Aluno data;
    NodeType* tempPtr;
    tempPtr = tree;

    if (tree->esquerda == NULL) {
        tree = tree->direita;
        delete tempPtr;
    } else if (tree->direita == NULL) {
        tree = tree->esquerda;
        delete tempPtr;
    } else {
        getSuccessor(tree, data);
        tree->aluno = data;
        deleteAluno(tree->direita, data.getRa());
    }
}

void Tree::getSuccessor(NodeType* tree, Aluno& data) {
    tree = tree->direita;
    while(tree->esquerda != NULL) {
        tree = tree->esquerda;
    }
    data = tree->aluno;
}
void Tree::printPreOrder(NodeType* tree) const {
    if (tree != NULL) {
        std::cout << tree->aluno.getNome() << ", ";
        printPreOrder(tree->esquerda);
        printPreOrder(tree->direita);
    }
}

void Tree::printInOrder(NodeType* tree) const {
    if(tree != NULL) {
        printInOrder(tree->esquerda);
        std::cout << tree->aluno.getNome() << ", ";
        printInOrder(tree->direita);
    }
}

void Tree::printPostOrder(NodeType* tree) const {
    if (tree != NULL) {
        printPostOrder(tree-> esquerda);
        printPostOrder(tree->direita);
        std::cout << tree->aluno.getNome() << ", ";
    }
}