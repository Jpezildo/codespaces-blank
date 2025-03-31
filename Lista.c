#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"



struct no {
    int dado; 
    struct no *prox;
};


struct lista {
    No *inicio;
No *fim;
int lenght;
}

No *criar_no(int dado) {
No *novo = malloc(sizeof(No));
if(novo) {
    novo -> dado = dado;
    return novo;
}
}
 Lista *criar_lista() {
    Lista *lista = calloc(1, sizeof(No));
 return lista;

}
void deletar_lista (Lista **lista) {
    if(*lista == NULL) return;
//liberar os nós
No *no = (*lista)->incio;
while(no) {
    No *aux = no->prox
    free(no);
no = aux;

}

//liberar a lista
free(*lista);
//apontar a lista pra NULL
*lista = NULL;




}



void listar (Lista *lista) {
if(!lista) return;
No *no = lista ->inicio;
While(no) {
    printf("(%d)",no->dado);
    no = no ->prox;

    listar_rec (no->prox);
    printf


    printf("NULL");
}
}
void listar_fim_inicio(Lista *lista) {
if (!lista) return
listar_rec(lista->inicio);
printf("\n");
}
void inserir_inicio(Lista *lista, int dado) {
if(!lista) return; 
if(lista -> lenght == 0) {
    No *novo = criar_no(dado);
    lista-> inicio = criar_no(dado);
lista -> fim = lista ->inicio;
}else{
No *novo = criar_no(dado);
if(!novo) return;
novo -> prox = lista -> inicio;
lista->inicio = novo;

lista-> lenght++;
}
}


void inserir_fim(Lista *lista, int dado) {
    if(!lista) return; 
    No *novo = criar_no(dado);
    if(!novo) return; 
if (lista -> lenght == 0) {
lista -> fim = novo;
lista -> inicio = novo; 
}else{
    lista->fim->prox = novo;

}
}
    
 void deletar_inicio(Lista *lista)  {
if(!lista) return;
if(lista -> length == 0) {
printf()



No *aux = lista ->inicio;
lista ->
}
 }   


























































