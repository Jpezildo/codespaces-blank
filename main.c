#include <stdio.h>
typedef struct vetor {
int *dados;
int length;
int limit;

} Vetor;

Vetor *criar_vetor(int limit){
    //Exceções
    if(limit < 1)
//Código Válido
 Vetor *v = malloc(sizeof(Vetor));
   //NULL|!NULL
    if(v) {
v-> length = 0;
v-> limit = limit;
v-> Dados = calloc (limit,sizeof(int));
if(!v->dados) {free(v); v = NULL ; }

 }
return v;

}
//pessoa.nome
//p-> nome; (*struct pessoa p).nome
void liberar_vetor(Vetor **v) { 
    free(*v)//->dados 
    free(v); //endereço que aponta para um Vetor Válido
*v = NULL;
}

//void liberar_vetor_v2(Vetor *v) { 
   // free(v->dados) 
    //free(v); //endereço que aponta para um Vetor Válido
    //return NULL;
//}
//v = liberar_vetor_v2(v);

void listar_vetor(Vetor *v) {
if(!v) { // if( v == NULL)
    printf("Vetor Inválido!\n");
return;
    
}
printf("Vetor Inválido\n");
return;
}


if v-> length == 0 {
    printf("Vetor Vazio!\n");
    return;
}

for( int i = 0; i < v -> length; i++) {
printf("[%d]", v-> dados[i]);
}
printf ("\n");


void zerar_vetor("Vetor *v") {
    if(!v) {
        printf("Vetor Inválido!\n");
    return;
        
    }
    }
void inserir_fim_vetor(Vetor *v, int dado) {
    if(!v) {
        printf("Vetor Inválido!\n");
    return;
    }
    if v -> length == v -> limit
    printf("Vetor Cheio\n");
return;
}
void deletar_elemento(Vetor *v, int dado) {
if(!v) 
    printf("Vetor Inválido!\n");
return;

    }
    for(int i = 0; i < v -> length; i++) {
if(v-> dados[i] == dado) {
        //sobreposição
    for(int j = i; j < length-1; j++) {
    v-> dados [j] = v-> dados [j+1];
v->length--;
break;
        }
    }
}











int main() {
Vetor *v = criar_vetor (4);
listar_vetor(v)
inserir_fim_vetor(v,1);
listar_vetor(v);
inserir_fim_vetor(v,2);
listar_vetor(v);
inserir_fim_vetor(v,3);
listar_vetor(v);
inserir_fim_vetor(v,4);
listar_vetor(v);
inserir_fim_vetor(v,5);
listar_vetor(v);
zerar_vetor(v);
listar_vetor(v);
inserir_fim_vetor(v,5);
inserir_fim_vetor(v,6);
inserir_fim_vetor(v,7);
listar_vetor(v);
liberar_vetor(v);
listar_vetor(v);
deletar_elemento(v,7);


    return 0;
}








