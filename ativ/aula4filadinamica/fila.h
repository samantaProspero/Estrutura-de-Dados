// fila dinamica= dynamic queue
typedef int TipoItem;

//no struct tudo é publico
struct No //node
{
  TipoItem valor;
  No* proximo;
};

class fila{
  private:
  No* primeiro; //front
  No* ultimo; //rear

  public:
  fila(); //construtora
  ~fila(); //destrutora
  bool estacheia(); //verifica se a fila está cheia //isfull
  bool estavazia(); //verifica se a fila está vazia //isempty
  void inserir(TipoItem item); //push //enqueue
  TipoItem remover(); //pop //dequeue
  void imprimir(); //print
};