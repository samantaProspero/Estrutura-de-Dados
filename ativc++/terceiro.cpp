#include <iostream>
// para poder usar a função potência:
#include <math.h>

using namespace std;

int main(){
  int a=5, b=2;

  int soma = a + b;
  cout << "Soma: " << soma << endl;

  // outra alternativa:
  // cout << "Soma: " << a+b << endl;

  int sub = a - b;
  cout << "Subtração: " << sub << endl;

  int mult = a * b;
  cout << "multiplicação: " << mult << endl;

  int quocdiv = a / b;
  cout << "quociente divisão: " << quocdiv << endl;

  int restocdiv = a % b;
  cout << "resto da divisão: " << restocdiv << endl;

  float div = float(a) / float(b);
  cout << "divisão real: " << div << endl;

  float pot = pow(a,b);
  cout << "potência: " << pot << endl;

  // Incremento e decremento:
  cout << "a antigo: " << a << endl;
  a++; // ou a+=1 ou a=a+1
  // decremento:  a--;  ou a-=1 ou a=a-1
  // a*=2; multiplica por 2
  cout << "a novo: " << a << endl;

  return 0;
}