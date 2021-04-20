#include <iostream>
#include "fila.h"
#include <cstddef> //NULL
#include <new>


using namespace std;
//construtora //queue
fila::fila(){
  primeiro = NULL;
  ultimo = NULL;
}

//destrutora //~queue
fila::~fila(){
  No* temp;
  while (primeiro != NULL)
  {
    temp = primeiro;
    primeiro = primeiro->proximo;
    delete temp;
  }
  ultimo = NULL;
}

//verifica se a fila está vazia //isempty
bool fila::estavazia(){
  return (primeiro == NULL);
}

//verifica se a fila está cheia //isfull
bool fila::estacheia(){
  No* temp;
  try
  {
    temp = new No;
    delete temp;
    return false;
  }
  catch(bad_alloc exception)
  {
    return true;
  }
} 


//push //enqueue
void fila::inserir(TipoItem item){
  if(estacheia()){
    cout << "A fila está cheia!\n";
    cout << "Não é possível inserir este elemento!\n";
  } else{
    No* NoNovo = new No;
    NoNovo->valor = item;  //tem q usar -> pq No possui ponteiro com uma de suas propriedades
    NoNovo->proximo = NULL;
    if(primeiro == NULL){
      primeiro = NoNovo;
    } else
    {
      ultimo->proximo = NoNovo;
    }
    ultimo = NoNovo;
  }
}

//pop
TipoItem fila::remover(){
  if(estavazia()){
    cout << "A fila está vazia!\n";
    cout << "Não existe elemento para ser removido!\n";
    return 0;
  } else{
    No* temp = primeiro;
    TipoItem item = primeiro->valor;
    primeiro = primeiro->proximo;
    if(primeiro ==NULL){
      ultimo = NULL;
    }
    delete temp;
    return item;
  }
} 

//print
void fila::imprimir(){
  No* temp = primeiro;
  cout << "Fila: [ ";
  while (temp != NULL)
  {
    cout << temp->valor << " ";
    temp = temp->proximo;
  }
  cout << "]\n";
} 
