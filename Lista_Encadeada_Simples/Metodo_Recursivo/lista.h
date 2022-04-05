//.h

struct lista {
 int info;
 //recursivamente, chama a struct. Essa variável guarda uma info.
 struct lista* prox;
};

//Define Lista como um tipo de variavel
typedef struct lista Lista;


Lista* inicializa (void);

Lista* insere (Lista* l, int i);

void imprime (Lista* l);

int vazia (Lista* l);

Lista* ocorrencias (Lista* l, int v);

Lista* removeInicio (Lista* l, int v);

Lista* removeInicio (Lista* l, int v);

int tamanho(Lista* l);

Lista* retira_rec (Lista* l, int v);

void libera_rec (Lista* l);
