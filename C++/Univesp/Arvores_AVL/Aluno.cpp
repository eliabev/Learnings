#include "Aluno.h"
using namespace std;

Aluno::Aluno() {
    this.ra = -1;
    this.nome = "";
};
Aluno::Aluno(int ra, string nome) {
    this.ra = ra;
    this->nome = nome;
};
string Aluno::getNome() {
    return nome;
};
int Aluno::getRa() {
    return ra;
};