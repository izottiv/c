#ifndef CONTA_H
#define CONTA_H

typedef struct
{
    int numeroconta;
    float saldo;
    char nome[50];
    char cpf[11];
    int tipo;
    int anoabertura;
}Conta;

void setnumero(Conta* conta1, int numero);
void setsaldo(Conta* conta1, float saldo);
void setnome(Conta* conta1, char* nome);
void setcpf(Conta* conta1, char* cpf);
void settipo(Conta* conta1, int tipo);
void setano(Conta* conta1, int ano);

int getnumero(Conta* conta1);
float getsaldo(Conta* conta1);
char* getnome(Conta* conta1);
char* getcpf(Conta* conta1);
char* gettipo(Conta* conta1);
int getano(Conta* conta1);

void central(Conta* conta1);

void preencher(Conta* conta1);

void Inicializar(Conta* conta1, int numero, float saldo, char* nome, char* cpf, int tipo, int anoabertura);

void depositar(Conta* conta1);

void sacar(Conta* conta1);

void imprimir(Conta* conta1);

void Emprestimo(Conta* conta1);

#endif