#include <iostream>
// MATRIZES:
using namespace std;

int main(){
  // int matriz[2][3];
  int lin, col;
  cout << "Digite o numero de linhas da matriz: " << endl;
  cin >> lin;
  cout << "Digite o numero de colunas da matriz: " << endl;
  cin >> col;
  int matriz[lin][col];
  for(int i = 0; i<lin; i++){
    for(int j = 0; j<col; j++){
      cout << "Digite o valor do elemento linha " << i << " coluna " << j << endl;
      cin >> matriz[i][j];
    }
  }
  for(int i = 0; i<lin; i++){
    for(int j = 0; j<col; j++){
      cout << matriz[i][j] << " " ;
    }
    cout << endl;
  }
  delete [] matriz;
  return 0;
}