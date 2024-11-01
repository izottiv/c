#ifndef CONTA_H
#define CONTA_H
#include "cliente.h"

typedef struct
{
    int numeroconta;
    float saldo;
    Cliente usuario;
    int tipo;
    int anoabertura;
}Conta;

void setnumero(Conta* conta1, int numero);
void setsaldo(Conta* conta1, float saldo);
void setcliente(Conta* conta1, Cliente usuario);
void settipo(Conta* conta1, int tipo);
void setano(Conta* conta1, int ano);

int getnumero(Conta* conta1);
float getsaldo(Conta* conta1);
Cliente getcliente(Conta* conta1);
char* gettipo(Conta* conta1);
int getano(Conta* conta1);

void central(Conta* conta1);

void preencher(Conta* conta1);

void Inicializar(Conta* conta1, int numero, float saldo, Cliente usuario, int tipo, int anoabertura);

void depositar(Conta* conta1);

void sacar(Conta* conta1);

void imprimir(Conta* conta1);

void Emprestimo(Conta* conta1);

#endif