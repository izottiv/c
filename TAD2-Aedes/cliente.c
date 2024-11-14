#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cliente.h"
#include "endereco.h"

void setnome(Cliente* usuario, char* nome){
    strcpy(usuario->nome, nome);
}
void setcpf(Cliente* usuario, char* cpf){
    strcpy(usuario->cpf, cpf);
}

void setendereco(Cliente* usuario, Endereco local){
    usuario->lugar = local;
}

char* getnome(Cliente* usuario){
    return usuario->nome;
}
char* getcpf(Cliente* usuario){
    return usuario->cpf;
}
Endereco getendereco(Cliente* usuario){
    return usuario->lugar;
}

void preenchercliente(Cliente* usuario){
    char nome[255], cpf[11];
    Endereco lugar;
    printf("Preencha com suas informações pessoais: \n");
    printf("Digite seu nome completo:");
    scanf("%[^\n]", nome);
    printf("Digite o seu CPF(somente os numeros): ");
    scanf("%s", cpf); 
    preencherendereco(&lugar);
    inicializar(usuario, nome, cpf, lugar);
}
void inicializar(Cliente* usuario, char* nome, char* cpf, Endereco lugar){
    setnome(usuario, nome);
    setcpf(usuario, cpf);
    setendereco(usuario, lugar);
}

void mudar(Cliente* usuario){
    int r;
    printf("Deseja mudar qual informação: \n");
    printf("1 - Nome\n");
    printf("2 - CPF\n");
    printf("Escolha a opcao: ");
    scanf("%d", &r);    
    switch (r)
    {
    case 1:
        mudarnome(usuario);
        break;
    case 2:
        mudarcpf(usuario);
        break;
    default:
        printf("Opcao invalida\n");
        mudar(usuario);
        break;
    }
}
void mudarnome(Cliente* usuario){
    char nome[55];
    printf("Digite o nome do titular:");
    scanf("%[^\n]", nome);
    setnome(usuario, nome);
}
void mudarcpf(Cliente* usuario){
    char cpf[55];
    printf("Digite o cpf do titular:");
    scanf("%[^\n]", cpf);
    setcpf(usuario, cpf);
}
void imprimircliente(Cliente* usuario){
    printf("Nome: %s\nCPF: %s\n", getnome(usuario), getcpf(usuario));
    imprimirendereco(&usuario->lugar);
}