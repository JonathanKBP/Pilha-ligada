#include "no.h"
typedef struct pilha Pilha;
 
Pilha * constroi_pilha(); //prototipo da funcao
 
//int pilha_cheia(Pilha *);
 
int pilha_vazia(Pilha *);
 
int push(int, Pilha*);
 //devolve sucesso ou fracasso
int pop(int *, Pilha*);
 //devolve sucesso ou fracasso 
 //o elemento sai por refer�ncia 
int tamanho(Pilha *);
int consulta_topo(Pilha *);
 
void mostra_pilha(Pilha *);
 
 
