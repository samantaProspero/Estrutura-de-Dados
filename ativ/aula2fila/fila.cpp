#include <iostream>
#include "fila.h"

using namespace std;
//construtora //queue
fila::fila(){
  primeiro = 0;
  ultimo = 0;
  estrutura = new TipoItem[max_itens];
}

//destrutora //~queue
fila::~fila(){
  delete [] estrutura;
}

//verifica se a fila está vazia //isempty
bool fila::estavazia(){
  return(ultimo == primeiro);
}

//verifica se a fila está cheia //isfull
bool fila::estacheia(){
    return(ultimo - primeiro == max_itens);
} 


//push //enqueue
void fila::inserir(TipoItem item){
  if(estacheia()){
    cout << "A fila está cheia!\n";
    cout << "Não é possível inserir este elemento!\n";
  } else{
    estrutura[ultimo % max_itens] = item;
    ultimo++;
  }
}

//pop
TipoItem fila::remover(){
  if(estavazia()){
    cout << "A fila está vazia!\n";
    cout << "Não existe elemento para ser removido!\n";
    return 0;
  } else{
    primeiro++;
    return estrutura[(primeiro-1) % max_itens];
  }
} 

//print
void fila::imprimir(){
  cout << "Fila: [ ";
  for(int i=primeiro; i<ultimo; i++){
    cout << estrutura[i % max_itens] << " ";
  }
  cout << "]\n";

} 
