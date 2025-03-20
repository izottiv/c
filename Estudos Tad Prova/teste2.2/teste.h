#ifndef TESTE_H_
#define TESTE_H_
#define MAX 15

typedef struct{
    int aluno;
}Salas;

typedef struct{
    Salas escola[MAX];
    int primeiro, ultimo;
}Escola;

void inicializarlista(Escola* lista);
void EhVazia(Escola* lista);
void inserirLista(Escola* lista, Salas valor);
void RemoverLista(Escola* lista, int p, Salas* removido);
void imprimir(Escola* lista);

#endif