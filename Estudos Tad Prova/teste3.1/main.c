#include <stdio.h>
#include "partedoisencad.h"

int main() {
    Lista minhaLista;
    Dado dado;

    // Inicializa a lista
    InicializaLista(&minhaLista);

    // Verifica se a lista está vazia
    if (EhVazia(&minhaLista)) {
        printf("A lista está vazia.\n");
    } else {
        printf("A lista não está vazia.\n");
    }

    // Inserir valores na lista
    for (int i = 1; i <= 5; i++) {
        dado.valor = i * 10; // Valores 10, 20, 30, 40, 50
        InserirValor(&minhaLista, &dado);
    }

    // Imprimir os valores da lista
    printf("Valores na lista após inserção:\n");
    ImprmirValor(&minhaLista);

    // Remover um valor da lista
    printf("Removendo um valor da lista...\n");
    RemoverValor(&minhaLista, &dado);
    printf("Valor removido: %d\n", dado.valor);

    // Imprimir os valores restantes na lista
    printf("Valores na lista após remoção:\n");
    ImprmirValor(&minhaLista);

    return 0;
}