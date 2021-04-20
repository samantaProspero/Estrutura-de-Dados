#include <iostream>

// vetores

using namespace std;

int main(){

  // ALOCAÇÃO ESTÁTICA:

  // int vet[4];
  // vet[0]=5;
  // vet[1]=10;

  // int vet[4]={5,10};
  // cout << vet[0] << endl;
  // cout << vet[1] << endl;
  // cout << vet[2] << endl;
  // cout << vet[3] << endl;
  // for (int i = 0; i<4; i++){
  //   cout << vet[i] << " ";
  // }
  // cout << endl;

  // int x = sizeof(vet);
  // int y = sizeof(int);
  // // tamanho to vetor em bytes
  // cout << x << endl;
  // cout << y << endl;
  // // quantidade de elemntos:
  // cout << x/y << endl;

  // ALOCAÇÃO DINÂMICA:

  int tamanho;
  cout << "Digite o tamanho do vetor: " << endl;
  cin >> tamanho;
  int* vetor = new int[tamanho];
  for(int i= 0; i < tamanho; i++){
    cout << "Digite o elemento " << i << " do vetor: " << endl;
    cin >> vetor[i];
  }
  for (int i = 0; i<tamanho; i++){
    cout << vetor[i] << " ";
  }
  cout << endl;
  delete [] vetor;
  return 0;
}