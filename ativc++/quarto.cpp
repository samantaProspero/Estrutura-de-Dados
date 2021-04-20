#include <iostream>

using namespace std;

#define pi 3.14;

void inscrever(){
  cout << "Se inscreva no canal do \nProfessor Douglas Maioli!\n";
}

int somar(int x, int y){
// int somar(int &x, int &y){ o & altera o valor de x e y na função principal main
  int t;
  t = 1;

  int soma;
  soma = x + y;
  return soma;
}

int main(){
  int t;
  t=0;
  inscrever();

  int a=5, b=4;
  int s;
  s = somar(a,b);
  cout << "Soma: " << s << endl;
  cout << "Valor de t: " << t << endl;
  cout << pi;

  return 0;
}