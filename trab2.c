#include "lista_enc.h"


int main(void){
	char nome_curso[60],cod_lido[4],nome_lido[60];
		char cod1[4],cod2[4];
	int qtd_disciplinas;
	int k, cont_k, cont_n;
	celula* lista;
	lista=(celula*)calloc(1,sizeof(celula));
	scanf("%d\n", &k);
	for(cont_k=0; cont_k < k; cont_k++){
		scanf("%[^\n]s\n", nome_curso);
					printf("\n\n%s\n\n", nome_curso);
		scanf("%d\n", &qtd_disciplinas);
					printf("\n\n%d\n\n", qtd_disciplinas);
		for(cont_n=0; cont_n < qtd_disciplinas; cont_n++){
			scanf("%s %[^\n]s\n", cod_lido, nome_lido);
			printf("\n%s - %s", cod_lido, nome_lido);
			inserir_inicio(cod_lido, &lista);
		}
		scanf("%s %s\n", cod1,cod2);
		celula *p, *q;
		while(!(cod1[0]=='F' && cod1[1]=='I' && cod1[2]=='M')){
			printf("\n%s %s", cod1,cod2);

			p=lista;
			q=lista;

			while(p!=NULL && strcmp(p->cod,cod1)!=0)
				p=p->prox;
			while(q!=NULL && strcmp(q->cod,cod2)!=0)
			  	q=q->prox;

			if(q!=NULL && p!=NULL){
				inserir_inicio(cod1, &q->pre_req);
			}
			scanf("%s %s\n", cod1,cod2);
		}
		printf("\n\n");
		imprimir_lista(q->pre_req);
	}
}
