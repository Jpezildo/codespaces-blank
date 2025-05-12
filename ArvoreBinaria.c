#include<stdio.h>
#include 

typedef struct no {
    No *esq;
    int dado;
    No*dir;
} No;

No *criar_no(int dado) {
No *novo_no =




}





void exibir (No *no) {
if (no) {         //no != NULL
printf("(%d),no->dado");    //pré-ordem
exibir(no -> esq);
// printf("(%d),no->dado"); // em-ordem
exibir(no -> dir);
// printf("(%d),no->dado"); // pós-ordem


}
}


int main (){
No *raiz = criar_no(1);
raiz -> esq = criar_no(2);
raiz -> esq -> esq = criar_no(4);
raiz -> esq -> = criar_no(4);
raiz -> esq -> = criar_no(4);
raiz -> esq -> = criar_no(4);
raiz -> esq -> = criar_no(4);
raiz -> esq -> = criar_no(4);









}







