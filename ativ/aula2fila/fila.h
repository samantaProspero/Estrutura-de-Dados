// fila = queue
typedef int TipoItem;
const int max_itens = 100;

class fila{
  private:
  int primeiro, ultimo;
  TipoItem* estrutura;

  public:
  fila(); //construtora
  ~fila(); //destrutora
  bool estacheia(); //verifica se a fila está cheia //isfull
  bool estavazia(); //verifica se a fila está vazia //isempty
  void inserir(TipoItem item); //push //enqueue
  TipoItem remover(); //pop //dequeue
  void imprimir(); //print
};