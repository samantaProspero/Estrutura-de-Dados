class carro{
  
  private:
  int ano;
  float valor, km;

  public:
  // construtor
  carro(int a, float v, float k);

  // get e set
  void setano(int a);
  int getano();

  void setvalor(float v);
  float getvalor();

  void setkm(float k);
  int getkm();

};
