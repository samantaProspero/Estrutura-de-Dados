#include <iostream>

using namespace std;

int main(){

  int inteiro = 5;
  cout << inteiro << endl;

  float real = 5.2;
  cout << real << endl;

  double grande = 5.2e99;
  cout << grande << endl;
  
  bool booleano = true;
  cout << booleano << endl;
  
  // char é aspas simples
  char letra = 'b';
  cout << letra << endl;

  // string é aspas duplas
  string palavra = "bola";
  cout << palavra << endl;

  int idade;
  cout << "Qual sua idade?" << endl;
  cin >> idade;
  cout << "Idade: " << idade << endl;

  return 0;
}