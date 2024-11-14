#include <stdio.h>
#include <string.h>
#include "Contabancaria.h"

void InicializarConta(Conta* conta1, int numero, float saldo){
    conta1->numero = numero;
    conta1->saldo = saldo;
}
void Deposito(Conta* conta1, float valor){
    conta1->saldo += valor;
    printf("\nDepositou: %f\n", valor);
}
void Sacar(Conta* conta1, float valor){
    if (valor>(conta1->saldo)){
        printf("Nao e possivel realizar a operacao\n");
    }
    else{
        conta1->saldo -= valor;
        printf("Saldo: %f\n", conta1->saldo);
    }
}
void imprimirsaldo(Conta* conta1){
    printf("Sua conta: %d\nSaldo: %f", conta1->numero, conta1->saldo);
}

