#ifndef CLIENTE_H
#define CLIENTE_H
#include "endereco.h"

typedef struct 
{
    char nome[255];
    char cpf[11];
    Endereco lugar;
}Cliente;

void setnome(Cliente* usuario, char* nome);
void setcpf(Cliente* usuario, char* cpf);

char* getnome(Cliente* usuario);
char* getcpf(Cliente* usuario);

void preenchercliente(Cliente* usuario);
void inicializar(Cliente* usuario, char* nome, char* cpf);

void mudar(Cliente* usuario);
void mudarnome(Cliente* usuario);
void mudarcpf(Cliente* usuario);

void imprimircliente(Cliente* usuario);

#endif