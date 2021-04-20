#include <iostream>
#include "pilha.h"

using namespace std;
//construtora //stack
pilha::pilha(){
  tamanho = 0;
  estrutura = new TipoItem[max_itens];
}

//destrutora //~stack
pilha::~pilha(){
  delete [] estrutura;
}

//verifica se a pilha está cheia //isfull
bool pilha::estacheia(){
  return(tamanho == max_itens);
} 

//verifica se a pilha está vazia //isempty
bool pilha::estavazia(){
  return(tamanho == 0);
} 

//push
void pilha::inserir(TipoItem item){
  if(estacheia()){
    cout << "A pilha está cheia!\n";
    cout << "Não é possível inserir este elemento!\n";
  } else{
    estrutura[tamanho] = item;
    tamanho++;
  }
}

//pop
TipoItem pilha::remover(){
  if(estavazia()){
    cout << "A pilha está vazia!\n";
    cout << "Não existe elemento para ser removido!\n";
    return 0;
  } else{
    tamanho--;
    return estrutura[tamanho];
  }
} 

//print
void pilha::imprimir(){
  cout << "Pilha: [ ";
  for(int i=0; i<tamanho; i++){
    cout << estrutura[i] << " ";
  }
  cout << "]\n";

} 

//lenght
int pilha::qualtamanho(){
  return tamanho;
} 
