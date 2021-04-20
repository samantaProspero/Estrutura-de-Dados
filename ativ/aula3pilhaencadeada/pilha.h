// pilha dinamica = dynamic stack

typedef int TipoItem;

//no struct tudo é publico
struct No //node
{
  TipoItem valor;
  No* proximo;
};


class pilha{
  private:
  No* NoTopo;

  public:
  pilha(); //construtora //stack
  ~pilha(); //destrutora //~stack
  bool estacheia(); //verifica se a pilha está cheia //isfull
  bool estavazia(); //verifica se a pilha está vazia //isempty
  void inserir(TipoItem item); //push
  TipoItem remover(); //pop
  void imprimir(); //print
};