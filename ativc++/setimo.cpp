#include <iostream>
#include <cstddef>

// PONTEIRO:

using namespace std;

int main(){
  int var1;
  int* pont1;  //é um ponteiro q vai apontar para uma variável de tipo int

  var1 = 5;
  pont1 = &var1; // & armazena o endereço da variável

  cout << "Valor da varável pelo seu nome: " << var1 << endl;
  cout << "Endereço do primeiro byte da varável: " << pont1 << endl;
  cout << "Valor da variavel pelo ponteiro: " << *pont1 << endl;
  
  int var2;
  // var2 = var1 é o mesmo que var2=*point1
  // var2 = 50;
  // pont1 = &var2;
  // cout << pont1 << endl;

  // int* pont2;
  // pont2 = NULL;  //aponta para o vazio (precisa do include cstddef)
  // cout << pont2 << endl ;
  // cout << *pont2 << endl; //não imprime nada

  int* pont3 = new int;
  *pont3 = 35;
  // cout << pont3 << endl;
  // cout << *pont3 << endl;
  delete pont3;
  pont3 = pont1; //pont3 passa a apontar para pont1
  cout << *pont3 << endl;
  cout << pont1 << endl;
  cout << pont3 << endl;

  return 0;
}