#include <iostream>
#include <math.h>

using namespace std;

int main(){
  //desafio 1:
  // float a, funcao;
  // cout << "Digite um valor para a\n";
  // cin >> a;
  // funcao = pow(a,2) -3*a + 5;

  // desafio 3:
  // float a, funcao;
  // cout << "Digite um valor para a\n";
  // cin >> a;
  // int count = a;
  // int mult=1;
  // for (int i = a; i>=1; i--){
  //   mult *=i;
  //   funcao = mult;
  // }

  // cout << "Resultado: " << funcao << endl;

  // desafio 4:
  float base;
  int expoente;
  bool continuar=1;


  while(continuar ==1){
    cout << "Digite a base da potência: "<< endl;
    cin >> base;

    cout << "Digite o espoente: "<< endl;
    cin >> expoente;
    float potencia=1;
    if(expoente>=0){
      for(int i = expoente; i>=1; i--){
        potencia *=base;
      }
      cout << "Resultado: " << potencia << endl;
      cout << "Deseja continuar? (Digite 1 para sim ou 0 para não\n";
      cin >> continuar;
      cout << continuar << endl;


    }else{
      cout << "Expoente não pode ser negativo" << endl;
      cout << "Deseja continuar? (Digite 1 para sim ou 0 para não)\n";
      cin >> continuar;
    }
  }
  cout << "Obrigada e volte sempre!" << endl;
  
 

  return 0;
}