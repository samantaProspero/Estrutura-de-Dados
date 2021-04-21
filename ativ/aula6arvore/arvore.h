#include <iostream>
#include "aluno.h"

struct No {
  Aluno aluno;
  No* filhoesquerda;
  No* filhodireita;
};

class BST { //Binary Search Tree
  private:
    No* raiz;

  public:
    BST();
    ~BST();
    void deletarArvore(No* Noatual);
    No* obterRaiz();
    bool estacheio();
    bool estavazio();
    void inserir(Aluno aluno);
    void remover(Aluno aluno);
    void removerbusca(Aluno aluno, No*& noatual);
    void deletarNo(No*& noatual);
    void obterSucessor(Aluno& AlunoSucessor, No* temp);
    void buscar(Aluno& aluno, bool& busca); // &: valor por referencia, tudo q alterar aqui, altera também no main
    void imprimirpreordem(No* Noatual);
    void imprimiremordem(No* Noatual);
    void imprimirposordem(No* Noatual);
};


