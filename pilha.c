#include "pilha.h"

struct pilha {
	struct no * topo;
};

Pilha * constroi_pilha(){
	Pilha * p = (Pilha *)malloc(sizeof(Pilha));
	if(p){
		p->topo = NULL;
	}
	return p;
}

int pilha_vazia (Pilha * p){
	return !p->topo;
}

int push(int i, Pilha *p){
	struct no *novo = constroi_no(i);	
	if(novo){
		if(!pilha_vazia(p)){
			novo-> prox = p->topo;
		}
		p->topo = novo;
		return 1;
	}
	return 0;
}

void mostra_pilha(Pilha *p){
	struct no *aux;
	if(pilha_vazia(p))
		printf("\nLista vazia.");
	else{
		aux = p->topo;
		while(aux != NULL){//vai ate o final da lista 
			printf("%d ", aux->info);
			aux = aux->prox;
		}
	}
	printf("\n");
}

int tamanho(Pilha *p){
	struct no *aux;
	int cont = 0;
	aux = p->topo;
	while(aux){
		cont ++;
		aux =aux->prox;
	}
	return cont;
}

int consulta_topo(Pilha *p){
	if(pilha_vazia(p))
		return -999;
	return p->topo->info;
}

int pop(int *i, Pilha *p){
	struct no *aux;
	if(pilha_vazia(p))
		return 0;
	aux = p->topo;//endereço do primeiro elemento da lista
	*i=aux->info;
	p->topo = p->topo->prox;
	free(aux);
	return 1;
}

