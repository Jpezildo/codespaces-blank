#include <stdio.h>
#include <stdlib.h>

void prototipo(int, int p2, char p3);

typedef struct {
    char nome[250];
    int idade;
} Pessoa;

typedef struct no {
    int chave;
    Pessoa valor;
    struct no *prox;
} NoChaveValor;

// Lista encadeada
typedef struct lista {
  NoChaveValor *inicio;
  int size;
} ListaEnc;

// Implementar a lista enc.

// hash(25) -> 5
int hash10(int idade) {
    return idade % 10;
}

// <K, V>
typedef struct {
    ListaEnc *listas;
    int (*h)(int valor);
} HashTable;

HashTable *criarTabelaHash(int size, int (*h)(int)) {
    HashTable ht = malloc(sizeof(HashTable));
    if(!ht) return NULL;
    ht->listas = malloc(sizeof(ListaEnc) * size);
    if(!ht->listas) {
        free(ht);
        return NULL;
    }
    return ht;
}

NoChaveValor *criar

// Chave é a idade
void inserir(Pessoa p, HashTable *ht) {
    if(!p || !ht) return;
    // obter o valor de Hash
    int h = hash(p->idade);
    
    // inserir pessoa p na posição 
    ListaEnc l = ht->listas[h];
    l.inicio; // pode estar vazio
    // caso vazio:
    if(l.inicio == NULL);
    l.inicio
    // - inserir no início

    // caso não vazio:
    // - verificar se o valor de chave já existe
    //      - em caso positivo: sobrescreve
    //      - senão: insere ordenado 
}



int main()
{
    HashTable *ht = criarTabelaHash(10, hash10);
    

    return 0;
}





