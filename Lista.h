#ifndef LISTA_H
#define LISTA_H 1

typedef struct lista Lista;
Lista *criar_lista();
void deletar_lista(Lista *lista);



void listar_for (Lista **lista); 
void listar_fim_inicio(Lista **lista); 
void listar_inserir_inicio (Lista **lista, int dado);
void listar_inicio (Lista **lista, int dado); 
void listar_fim  (Lista **lista);
#endif