#include<stdio.h>
#include<stdlib.h>
typedef int tp_item;

typedef struct tp_no{
  tp_item info;
  struct tp_no *prox;
}tp_listase;

tp_listase *inicializa_listase(){
  return NULL;
}

int listase_vazia(tp_listase *lista){
  if(lista==NULL) return 1;
  else return 0;
}

tp_listase *aloca_listase(){
  tp_listase *novo_no;
  novo_no = (tp_listase*) malloc(sizeof(tp_listase));
  return novo_no;
}

int insere_listase_no_fim_circular(tp_listase **l, tp_item e){
  tp_listase *novo_no, *atu;
  novo_no = aloca_listase();
  if(novo_no == NULL) return 0;
  novo_no->info = e;
  novo_no->prox = NULL;
  if(listase_vazia(*l)){
    *l = novo_no;
  } else{
    atu = *l;
    while(atu->prox != NULL){
      atu = atu->prox;
    }
    atu->prox=novo_no;
  }
return 1;
}

int conecta_final_inicio(tp_listase *l){
  tp_listase *atu;
  if(listase_vazia(l)) return 0; 
  else{
    atu = l;
    while(atu->prox != NULL){
      atu = atu->prox;
    }
    atu->prox = l;
  }
  return 1;
}

int main(){
  tp_listase *lista, *atu, *ant;
  int qcasos, qpessoas, salto, cont, salto2, cont3;
  cont3 = 1;
  scanf(" %d", &qcasos);
  while(qcasos+1 != cont3){ 
    lista = NULL;
    scanf(" %d %d", &qpessoas, &salto);
    salto2 = salto;
    cont = 1;
    while(cont != qpessoas + 1){
      insere_listase_no_fim_circular(&lista, cont++);
    }
    conecta_final_inicio(lista);   
    cont = 1;
    atu = lista;
    ant = NULL;
    while(qpessoas != 1){ 
      while(cont != salto){ 
        ant = atu;
        atu = atu->prox;
        cont++;
      }
      ant->prox = atu->prox;
      //printf("elemento: %d\n", atu->info);
      qpessoas--;
      salto = salto + salto2;
    }
    salto2 = 0;
    printf("Case %d: %d\n", cont3, ant->info);
    cont3++;
  }
return 0;
}
