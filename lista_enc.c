/*
PROGRAMA QUE CRIA UMA LISTA DINAMICA ENCADEADA
AS OPERACOES REALIZADAS NA LISTA SAO:
- INSERCAO NO INICIO DA LISTA
- INSERCAO NO FIM DA LISTA
- REMOCAO DE UM ELEMENTO QUALQUER
- REMOCAO DO PRIMEIRO ELEMENTO DA LISTA
- IMPRESSAO DA LISTA
*/
#include "lista_enc.h"

/*Funcao que apaga todos os nós da lista L*/
void apagar_lista(celula **L)
{
    celula *aux;

    while(*L != NULL)
    {
        aux = *L;
        *L = (*L)->prox;
        free(aux);
    }
}

/*Funcao que insere um novo no sempre no inicio da lista*/
void inserir_inicio(char cod[4], celula** L)
{
    celula *novo;

    novo = (celula*) malloc(sizeof(celula));
    strcpy(novo->cod,cod);

    novo->prox = *L;
    *L = novo;
}

/*Funcao que remove o primeiro no da lista*/
void remover_inicio(celula** L)
{
    celula *aux;

    aux = *L;
    *L = (*L)->prox;
    free( aux);
}

/*Funcao que remove um elemento x qualquer da lista*/
void remover_elemento(char cod[4], celula** L)
{
    celula *aux;        /*percorre os nos da lista procurando x*/
    celula *ant = NULL; /* esta sempre um no' atras do ponteiro aux*/
    
    aux = *L;
    while(aux != NULL && strcmp(aux->cod,cod)!=0)
    {
        ant = aux;
        aux = aux->prox;
    }
    if(aux == NULL)
        printf("\nValor nao encontrado");
    else {
        if(ant == NULL)
            *L = (*L)->prox;
        else
            ant->prox = aux->prox;
        
        free( aux);
    }
}


/*Função imprime o campo chave armazenado em cada nó da lista L*/
void imprimir_lista(celula *L)
{
    celula *p;
    
    for(p = L; p != NULL; p = p->prox)
        printf("%s ", p->cod);
}


