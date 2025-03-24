#include <stdio.h>
#include <stdlib.h>

typedef struct no No;
struct no {
    int dado;
    No *prox;
};

//operações
//criar novo nó

void listar_for(No *inicio) {
for(No *no = inicio; no != NULL; no = no->prox) {
    printf("(%d)->", no->dado);
    printf("NULL\n");
}
}
void listar_fim_inicio(No *no) {
if(no == NULL) {
    printf("NULL<-");
    return;
}
listar_fim_inicio(no->prox);
printf("<-(%d)", no ->dado); 
}

void listar(No *inicio) {
No *no = inicio;   // inicialização
while(no != NULL) { // Condição de parada
    printf("(%d)->",no->dado);
}
}
int main () {
No *inicio = NULL;
inicio = criar_no(1);
if(inicio == NULL) return 1;
inicio->prox = criar_no(2);
if(inicio->prox == NULL) return 1;
inicio->prox->prox = criar_no(3);
if(inicio->prox->prox == NULL) return 1;
inicio->prox->prox->prox = criar_no(4);
if(inicio->prox->prox->prox == NULL) return 1;



















listar(inicio);
return 0;
}


