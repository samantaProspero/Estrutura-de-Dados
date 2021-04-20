#include <iostream>

using namespace std;

int main(){
  float nota1, nota2, media;
  cout << "Digite a primeira nota: " << endl;
  cin >> nota1;
  cout << "Digite a segunda nota: " << endl;
  cin >> nota2;
  media = (nota1 + nota2)/2;
  cout << "Média: " << media << endl;

  //igualdade == 
  //diferente !=

  if(media >=5){
    cout << "Aluno aprovado\n";
  } else if(media >=3){
    cout << "Aluno de recuperação\n";
  } else{
    cout << "Aluno reprovado\n";
  }

  // operadores lógicos:
  // E: && OU:|| NÃO:!

  // operador ternário
  (media >=5) ? cout << "Nota azul" : cout << "Nota vermelha";

  return 0;
}