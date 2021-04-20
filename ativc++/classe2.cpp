#include <iostream>

using namespace std;

class carro{
  
  private:
  int ano;
  float valor, km;

  public:
  // construtor
  carro(int a=0, float v=-1, float k=-1){
    ano = a;
    valor=v;
    km=k;
  };

  void setano(int a){
    ano = a;
    // this->ano = ano;

  }
  int getano(){
    return ano;
  }

  void setvalor(float v){
    valor = v;
    // this->valor = valor;

  }
  float getvalor(){
    return valor;
  }

  void setkm(float k){
    km = k;
    // this->km = km;

  }
  int getkm(){
    return km;
  }

};

int main(){

  // carro palio;
  carro palio(1995, 10000, 150000);
  // palio.setano(1995);
  // palio.setvalor(10000);
  // palio.setkm(150000);

  cout << "Palio: \n";
  cout << "Ano: " << palio.getano() << endl;
  cout << "Valor: " << palio.getvalor() << endl;
  cout << "Km: " << palio.getkm() << endl;

  carro celta;
  celta.setano(2000);
  celta.setvalor(12000);
  celta.setkm(90000);

  cout << "Celta: \n";
  cout << "Ano: " << celta.getano() << endl;
  cout << "Valor: " << celta.getvalor() << endl;
  cout << "Km: " << celta.getkm() << endl;

  return 0;
}