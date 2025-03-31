#include <stdio.h>

typedef struct no{
    int dado;
    struct no *proximo;
} No;

No *criar_no(int dado){
No *no = malloc(sizeof((No));
if(no) {
    no->dado = dado;
    no->prox = NULL;
}

}

void deletar_elem(lista *lista,int dado){
    if(!lista) {
    printf("Lista inválida!\n");
return;    
}
if lista -> lenght == 0 {
    printf("Lista vazia!\n");
    return;
}
No * no_aux -> prox;
While (no_aux->prox)



}


















