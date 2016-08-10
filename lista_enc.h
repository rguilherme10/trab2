/*
Biblioteca para funcoes de manipulacao de uma lista
 simplesmente encadeada com ponteiro L

 - INSERCAO NO INICIO DA LISTA
- INSERCAO NO FIM DA LISTA
- REMOCAO DE UM ELEMENTO QUALQUER
- REMOCAO DO PRIMEIRO ELEMENTO DA LISTA
- IMPRESSAO DA LISTA
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h> /*malloc, calloc, free*/

typedef struct cel
{
    char cod[4];
    char nome[60];
    struct cel *pre_req;
    struct cel *prox;
}celula;

/*Funcao que apaga todos os nós da lista L*/
void apagar_lista(celula **L);


/*Funcao que insere um novo no sempre no inicio da lista*/
void inserir_inicio(char cod[4], celula** L);


/*Funcao que remove o primeiro no da lista*/
void remover_inicio(celula** L);


/*Funcao que remove um elemento x qualquer da lista*/
void remover_elemento(char cod[4], celula** L);


/*Função imprime o campo chave armazenado em cada nó da lista L*/
void imprimir_lista(celula *L);
