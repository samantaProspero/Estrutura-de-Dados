#include <iostream>
#include <cstddef>
#include "arvore.h"

using namespace std;

BST::BST(){
  raiz = NULL;
}

BST::~BST(){
  deletarArvore(raiz);
}

void BST::deletarArvore(No* Noatual){
  if (Noatual != NULL){
    deletarArvore(Noatual->filhoesquerda);

    deletarArvore(Noatual->filhodireita);

    delete Noatual;
  }
}

No* BST::obterRaiz(){
  return raiz;
}
bool BST::estacheio(){
  try{
    No* temp = new No;
    delete temp;
    return false;
  }
  catch(bad_alloc exception){
    return true;
  }
  
}
bool BST::estavazio(){
  return (raiz == NULL);
}

void BST::inserir(Aluno aluno){
  if(estacheio()){
    cout << "A tabela BST está cheia!\n";
    cout << "O elemento não pode ser inserido!\n";
  } else {

    No* NoNovo = new No;
    NoNovo->aluno = aluno;
    NoNovo->filhodireita = NULL;
    NoNovo->filhoesquerda = NULL;

    if (raiz==NULL){
      raiz = NoNovo;
    } else {

      No* temp = raiz;
      while (temp != NULL){
        if (aluno.obterRa() < temp->aluno.obterRa()){
          if(temp->filhoesquerda == NULL){
            temp->filhoesquerda = NoNovo;
            break;
          } else {
            temp = temp->filhoesquerda;
          }
        } else {
          if(temp->filhodireita == NULL){
            temp->filhodireita = NoNovo;
            break;
          } else {
            temp = temp->filhodireita; 
          }
        }
      }
    }
  }
}

void BST::remover(Aluno aluno){
  removerbusca(aluno, raiz);
}

void BST::removerbusca(Aluno aluno, No*& noatual){

  if (aluno.obterRa() < noatual->aluno.obterRa()){
    removerbusca(aluno, noatual->filhoesquerda);
  } else if (aluno.obterRa() > noatual->aluno.obterRa()){
    removerbusca(aluno, noatual->filhodireita);
  } else {
    deletarNo(noatual);
  }  

}

void BST::deletarNo(No*& noatual){
  No* temp = noatual;
  if (noatual->filhoesquerda == NULL){
    noatual = noatual->filhodireita;
    delete temp;
  } else if (noatual->filhodireita == NULL){
    noatual = noatual->filhoesquerda;
    delete temp;
  } else {
    Aluno AlunoSucessor;
    obterSucessor(AlunoSucessor, noatual);
    noatual->aluno = AlunoSucessor;
    removerbusca(AlunoSucessor, noatual->filhodireita);
  }
}

void BST::obterSucessor(Aluno& AlunoSucessor, No* temp){
  temp = temp->filhodireita;
  while (temp->filhoesquerda != NULL){
    temp = temp->filhoesquerda;
  }
  AlunoSucessor = temp->aluno;
}

void BST::buscar(Aluno& aluno, bool& busca){
  busca = false;
  No* noatual = raiz;
  while (noatual != NULL){
    if (aluno.obterRa() < noatual->aluno.obterRa()){
      noatual = noatual->filhoesquerda;
    } else if (aluno.obterRa() > noatual->aluno.obterRa()){
      noatual = noatual->filhodireita;
    } else{
      busca = true;
      aluno = noatual->aluno;
      break;
    }

  }
}

void BST::imprimirpreordem(No* Noatual){
  if (Noatual != NULL){
    cout << Noatual->aluno.obterNome() << ": ";
    cout << Noatual->aluno.obterRa() << endl;

    imprimirpreordem(Noatual->filhoesquerda);
    imprimirpreordem(Noatual->filhodireita);
  }
}

void BST::imprimiremordem(No* Noatual){
  if (Noatual != NULL){
    imprimiremordem(Noatual->filhoesquerda);

    cout << Noatual->aluno.obterNome() << ": ";
    cout << Noatual->aluno.obterRa() << endl;

    imprimiremordem(Noatual->filhodireita);            
}}

void BST::imprimirposordem(No* Noatual){
  if (Noatual != NULL){
    imprimirposordem(Noatual->filhoesquerda);
    imprimirposordem(Noatual->filhodireita);

    cout << Noatual->aluno.obterNome() << ": ";
    cout << Noatual->aluno.obterRa() << endl;            
  }            
}

