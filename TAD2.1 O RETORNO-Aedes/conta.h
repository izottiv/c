#ifndef CONTA_H_
#define CONTA_H_    
#include "cliente.h"

typedef struct 
{
    int numero;
    float saldo;
    Cliente cliente;
    int tipo;
    int anoabertura;
}Conta;

//sets
void set_numeroconta(Conta* conta, int numero);
void set_saldo(Conta* conta, float saldo);
void set_cliente(Conta* conta, Cliente usuario);
void set_tipo(Conta* conta, int tipo);
void set_anoabertura(Conta* conta, int ano);

//gets
int get_numeroconta(Conta* conta);
float get_saldo(Conta* conta);
Cliente get_cliente(Conta* conta);
char* get_tipo(Conta* conta);
int get_anoabertura(Conta* conta);

//funções
void preencher_conta(Conta* conta);
void inicializar_conta(Conta* conta, int numero, float saldo, Cliente usuario, int tipo, int ano);
void imprimir_conta(Conta* conta);

#endif