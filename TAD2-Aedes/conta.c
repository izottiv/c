#include <stdio.h>
#include <string.h>
#include "conta.h"
#include "cliente.h"

void setnumero(Conta* conta1, int numero){
    conta1->numeroconta = numero;
}
void setsaldo(Conta* conta1, float saldo){
    conta1->saldo = saldo;
}
void settipo(Conta* conta1, int tipo){
    conta1->tipo = tipo; 
}
void setano(Conta* conta1, int ano){
    conta1->anoabertura = ano;
}

int getnumero(Conta* conta1){
    return (conta1 -> numeroconta);
}
float getsaldo(Conta* conta1){
    return (conta1 -> saldo);
}
char* gettipo(Conta* conta1){
    if (conta1->tipo == 1){
        return "Corrente";
    }
    else if(conta1->tipo == 2){
        return "Poupança"; 
    }
    
}
int getano(Conta* conta1){
    return (conta1 -> anoabertura);
}

void central(Conta* conta1){
    int r, burro;
    printf("\nBem vindo a central\n");
    printf("Que operacao deseja realizar ?\n");
    printf("1 - Cadastrar as informacoes da conta\n");
    printf("2 - Realizar um deposito\n");
    printf("3 - Realizar um saque\n");
    printf("4 - Realizar um emprestimo\n");
    printf("5 - Visuzalizar as informacoes da conta\n");
    printf("Escolha a sua opcao: ");
    scanf("%d", &r);
    printf("\n");
    switch (r)
    {
    case 1: 
        preencher(conta1);
        break;
    case 2: 
        depositar(conta1);
        break;
    case 3:
        sacar(conta1);
        break;
    case 4:
        Emprestimo(conta1);
        break;
    case 5:
        imprimir(conta1);
        break;
    
    default:
        printf("Opção inválida");
        central(conta1);
        break;
    }
}

void preencher(Conta* conta1){
    int numero, tipo, ano;
    float saldo;
    Cliente usuario;
    char nome[50], cpf[11];
    preenchercliente(&usuario);
    printf("Vamos criar a sua conta \n");
    printf("Digite o numero da sua conta: ");
    scanf("%d", &numero);
    printf("Digite seu saldo inicial: ");
    scanf("%f", &saldo);
    preenchercliente(&conta1->usuario);
    printf("Digite o tipo da conta (1 - Corrente 2 - Poupanca): ");
    scanf("%d", &tipo);
    printf("Digite o ano de criacao da conta: ");
    scanf("%d", &ano);
    Inicializar(conta1, numero, saldo, usuario, tipo, ano);
    
}

void Inicializar(Conta* conta1, int numero, float saldo, Cliente usuario, int tipo, int anoabertura){
char centrall;
setnumero(conta1, numero); 
setsaldo(conta1, saldo);
setcliente(conta1, usuario);
settipo(conta1, tipo);
setano(conta1, anoabertura);
printf("Deseja retornar para a central (s/n)?\n");
scanf(" %c", &centrall);
if(centrall == 's'){
central(conta1);
}

}
void depositar(Conta* conta1){
    char centrall;
    float deposito;
    printf("Digite o valor do deposito: ");
    scanf("%f", &deposito);
    conta1->saldo += deposito;
    printf("Deseja retornar para a central (s/n)?\n");
    scanf(" %c", &centrall);
    if(centrall == 's'){
    central(conta1);
}
}

void sacar(Conta* conta1){
char centrall;
float valorsaque;
printf("Digite o valor que deseja sacar: ");
scanf("%f", &valorsaque);
if(conta1->saldo>valorsaque){
    conta1->saldo -= valorsaque;
}
else{
    printf("Operação indisponivel por falta de credito\n");
}
printf("Deseja retornar para a central (s/n)?\n");
scanf(" %c", &centrall);
if(centrall == 's'){
central(conta1);
}
}

void Emprestimo(Conta* conta1){
    char centrall;
    char r;
    float emprestimo;
    printf("Gostaria de fazer um emprestimo (s/n) ?");
    scanf(" %c", &r);
    if(r == 's'){
        if((2024 - conta1->anoabertura)<5){
            printf("Infelizmente não é possivel realizar o empreestimo, sua conta não possui 5 anos ainda\n");
        }
        else{
            printf("Qual o valor que você deseja para o emprestimo ?\n Lembrando que a taxa é de 12%%");
            scanf("%f", &emprestimo);
            printf("Ok, emprestimo aprovado\n");
        }
    }
    printf("Deseja retornar para a central (s/n)?\n");
    scanf(" %c", &centrall);
    if(centrall == 's'){
    central(conta1);
}
}

void imprimir(Conta* conta1){
    char centrall;
    printf("Informacoes da conta:\n");
    printf("Numero da conta: ");
    printf("%d", getnumero(conta1));
    printf("\n");
    printf("Saldo da conta: ");
    printf("%.2f",getsaldo(conta1));
    printf("\n");
    printf("Nome do titular da conta: ");
    printf("%s",getnome(conta1));
    printf("\n");
    printf("Cpf do titular: ");
    printf("%s",getcpf(conta1));
    printf("\n");
    printf("Tipo da conta: ");
    printf("%s",gettipo(conta1));
    printf("\n");
    printf("Ano de abertura da conta: ");
    printf("%d",getano(conta1));
    printf("\n");
    imprimircliente(&conta1->usuario);
    printf("Deseja retornar para a central (s/n)?\n");
    scanf(" %c", &centrall);
    if(centrall == 's'){
    central(conta1);
}
}