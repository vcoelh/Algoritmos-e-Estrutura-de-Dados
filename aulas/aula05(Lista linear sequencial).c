#define MAX 50

typedef int TIPOCHAVE;

typedef struct{

TIPOCHAVE chave; // dando um nome, TIPOCHAVE, pro tipo int
// outros campos...

} REGISTRO;

typedef struct {
    REGISTRO A[MAX];
    int nroElem;

} LISTA;



// INICIALIZAÇÃO :

void inicializarLista(LISTA l){
    l.nroElem = 0;
}

// RETORNAR O NUM DE ELEMENTOS:

// basta retornar o valor do campo nroElem;

int tamnho(LISTA* l){
    return l->nroElem;
}







/*
FUNÇÕES DE GERENCIAMENTO:

Inicializar a estrutura;
Retornar a quantidade de elememtos válidos;
Exibir os elementos da estrutura;
Buscar por um elemento na estrutura;
Inserir elementos na estrutura;
Reiniciar a estrutura;
*/