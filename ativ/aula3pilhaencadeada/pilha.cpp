#include <iostream>
#include "pilha.h"
#include <cstddef> //NULL

using namespace std;

//construtora //stack
pilha::pilha(){
  NoTopo = NULL;
}

//destrutora //~stack
pilha::~pilha(){
  No* NoTemp;
  while (NoTopo!=NULL)
  {
    NoTemp = NoTopo;
    NoTopo = NoTopo->proximo;
    delete NoTemp;
  }
  
}

//verifica se a pilha está cheia //isfull
bool pilha::estacheia(){
  No* NoNovo;
  try
  {
    NoNovo = new No;
    delete NoNovo;
    return false;
  }
  catch(bad_alloc exception)
  {
    return true;
  }
} 

//verifica se a pilha está vazia //isempty
bool pilha::estavazia(){
  return(NoTopo == NULL);
} 

//push
void pilha::inserir(TipoItem item){
  if(estacheia()){
    cout << "A pilha está cheia!\n";
    cout << "Não é possível inserir este elemento!\n";
  } else{
    No* NoNovo = new No;
    NoNovo->valor = item;  //tem q usar -> pq No possui ponteiro com uma de suas propriedades
    NoNovo->proximo = NoTopo;
    NoTopo = NoNovo;
  }
}

//pop
TipoItem pilha::remover(){
  if(estavazia()){
    cout << "A pilha está vazia!\n";
    cout << "Não existe elemento para ser removido!\n";
    return 0;
  } else{
    No* NoTemp;
    NoTemp = NoTopo;
    TipoItem item = NoTopo->valor;
    NoTopo = NoTopo->proximo;
    delete NoTemp;

    return item;
  }
} 

//print
void pilha::imprimir(){
  No* NoTemp = NoTopo;
  cout << "Pilha: [ ";
  while (NoTemp != NULL)
  {
    cout << NoTemp->valor << " ";
    NoTemp = NoTemp->proximo;
  }
  cout << "]\n";
} 
