#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "conta.h"

//sets
void set_numeroconta(Conta* conta, int numero){
    conta->numero = numero;    
}
void set_saldo(Conta* conta, float saldo){
    conta->saldo = saldo;
}
void set_cliente(Conta* conta, Cliente usuario){
    conta->cliente = usuario;
}
void set_tipo(Conta* conta, int tipo){
    conta->tipo = tipo;
}
void set_anoabertura(Conta* conta, int ano){
    conta->anoabertura = ano;
}

//gets
int get_numeroconta(Conta* conta){
    return (conta->numero);
}
float get_saldo(Conta* conta){
    return (conta->saldo);
}
Cliente get_cliente(Conta* conta){
    return (conta->cliente);
}
char* get_tipo(Conta* conta){
    if (conta->tipo == 1){
        return "CORRENTE";
    }
    else{
        return "POUPANÇA";
    }
}
int get_anoabertura(Conta* conta){
    return conta->anoabertura;
}

//funções
void preencher_conta(Conta* conta){
    int numero, tipo, anoabertura;
    float saldo;
    Cliente usuario;
    printf("Digite as informações da conta: \n");
    printf("Digite o numero da conta: ");
    scanf("%d", &numero);getc(stdin);
    printf("Digite o saldo inicial da conta: ");
    scanf("%f", &saldo);getc(stdin);
    preencher_cliente(&usuario);
    printf("Digite o tipo da conta: ");
    scanf("%d", &tipo);getc(stdin);
    printf("Digite o ano de abertura da conta: ");
    scanf("%d", &anoabertura);getc(stdin);

    inicializar_conta(conta, numero, saldo, usuario, tipo, anoabertura);
}
void inicializar_conta(Conta* conta, int numero, float saldo, Cliente usuario, int tipo, int ano){
    set_numeroconta(conta, numero);
    set_saldo(conta, saldo);
    set_cliente(conta, usuario);
    set_tipo(conta, tipo);
    set_anoabertura(conta, ano);
}
void imprimir_conta(Conta* conta){
    printf("Numero da conta: %d\n", get_numeroconta(conta));
    printf("Saldo da conta: %f\n", get_saldo(conta));
    imprimir_cliente(&conta->cliente);
    printf("\nTipo da conta: %s\n", get_tipo(conta));
    printf("Ano de criação da conta: %d", get_anoabertura(conta));
}
