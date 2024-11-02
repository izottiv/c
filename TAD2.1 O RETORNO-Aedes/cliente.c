#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "endereco.h"
#include "cliente.h"

//sets
void set_nome(Cliente* cliente, char* nome){
    strcpy(cliente->nome, nome);
}
void set_cpf(Cliente* cliente, char* cpf){
    strcpy(cliente->cpf, cpf);
}
void set_endereco(Cliente* cliente, Endereco local){
    cliente->local = local;
}

//gets
char* get_nome(Cliente* cliente){
    return (cliente->nome);
}
char* get_cpf(Cliente* cliente){
    return (cliente->cpf);
}
Endereco get_endereco(Cliente* cliente){
    return(cliente->local);
}

//funçoes
void preencher_cliente(Cliente* cliente){
    char nome[255], cpf[13];
    Endereco local;
    printf("Digite as informações do titular da conta:\n");
    printf("Digite o nome do titular: ");
    scanf("%[^\n]",nome);
    printf("Digite o cpf do titular: ");
    scanf("%s", cpf); getc(stdin);
    preencher_endereco(&local);
    inicializar_cliente(cliente, nome, cpf, local);

}
void inicializar_cliente(Cliente* cliente, char* nome, char* cpf, Endereco local){
    set_nome(cliente, nome);
    set_cpf(cliente, cpf);
    set_endereco(cliente, local);
}

void imprimir_cliente(Cliente* cliente){
    printf("Nome do titular da conta: %s\n", get_nome(cliente));
    printf("CPF do titular da conta: %s\n", get_cpf(cliente));
    imprimir_endereco(&cliente->local);
}