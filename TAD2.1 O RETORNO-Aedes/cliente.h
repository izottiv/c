#ifndef CLIENTE_H_
#define CLIENTE_H_
#include "endereco.h"

typedef struct
{
    char nome[255];
    char cpf[13];
    Endereco local;
}Cliente;

//sets
void set_nome(Cliente* cliente, char* nome);
void set_cpf(Cliente* cliente, char* cpf);
void set_endereco(Cliente* cliente, Endereco local);

//gets
char* get_nome(Cliente* cliente);
char* get_cpf(Cliente* cliente);
Endereco get_endereco(Cliente* cliente);

//funçoes
void preencher_cliente(Cliente* cliente);
void inicializar_cliente(Cliente* cliente, char* nome, char* cpf, Endereco local);
void imprimir_cliente(Cliente* cliente);

#endif