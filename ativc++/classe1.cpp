#include <iostream>

using namespace std;

class propaganda{
  private:
  
  public:

  void inscrever(){
    cout << "Se inscreva no canal!\n";
  }

  void curta(){
    cout << "Curta este video!\n";
  }

  
};

int main(){
  // chama a aclasse propaganda e cria um objeto chamado canal:
  propaganda canal;
  canal.inscrever();
  canal.curta();
  
  return 0;
}