#ifndef CONTABANCARIA_H_
#define CONTABANCARIA_H_

typedef struct{
    int numero;
    float saldo;
}Conta;

void InicializarConta(Conta* conta1, int numero, float saldo);
void Deposito(Conta* conta1, float valor);
void Sacar(Conta* conta1, float valor);
void imprimirsaldo(Conta* conta1);


#endif