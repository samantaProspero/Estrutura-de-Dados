#include <iostream>

using namespace std;

int main(){

  int n;
  cout << "Digite um número\n";
  cin >> n;

  int soma = 0;
  int count = 1;

  // while (count <= n){
  //   soma += count;
  //   count ++;
  // }

  // break

  // do {
  //   soma += count;
  //   count ++;
  // }while (count <= n);

  // for (int j=1; j <= n; j+=1){
  //   soma += j;
  // }

  for (int j=1; j <= n; j+=1)soma += j;
  cout << " A soma de 0 ate " << n << " = " << soma << endl;



  return 0;
}