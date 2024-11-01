#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "endereco.h"

void setrua(Endereco* local, char* rua){
    strcpy(local->rua, rua);
}
void setbairro(Endereco* local, char* bairro){
    strcpy(local->bairro, bairro);
}
void setnumeroendereco(Endereco* local, int numero){
    local->numero = numero;
}
void setcidade(Endereco* local, char* cidade){
    strcpy(local->cidade, cidade);
}
void setestado(Endereco* local, char* estado){
    strcpy(local->estado, estado);
}
void setcep(Endereco* local, char* cep){
    strcpy(local->cep, cep);
}

char* getrua(Endereco* local){
    return local->rua;
}
char* getbairro(Endereco* local){
    return local->bairro;
}
int getnumeroendereco(Endereco* local){
    return local->numero;
}
char* getcidade(Endereco* local){
    return local->cidade;
}
char* getestado(Endereco* local){
    return local->estado;
}
char* getcep(Endereco* local){
    return local->cep;
}

void preencherendereco(Endereco* local){
    char rua[55], bairro[55], cidade[55], estado[55], cep[8];
    int numero;
    printf("Preencha com o seu endereço:\n");
    printf("Digite o nome da sua rua: ");
    getchar();
    scanf("%[^\n]", rua);
    printf("Digite o nome seu bairro: ");
    getchar();
    scanf("%[^\n]", bairro);
    printf("Digite o numero da sua casa: ");
    scanf("%d", &numero);
    printf("Digite o nome da sua cidade: ");
    getchar();
    scanf("%[^\n]", cidade);
    printf("Digite o nome do seu estado: ");
    getchar();
    scanf("%[^\n]", estado);
    printf("Digite o seu CEP(somente numeros): ");
    getchar();
    scanf("%[^\n]", cep);
    Inicializa(local, rua, bairro, numero, cidade, estado, cep);
    
}
void Inicializaendereco(Endereco* local, char* rua, char* bairro, int numero, char* cidade, char* estado, char* cep){
    setrua(local, rua);
    setbairro(local, bairro);
    setnumero(local, numero);
    setcidade(local, cidade);
    setestado(local, estado);
    setcep(local, cep);
}

void modificarrua(Endereco* local){
    char rua[55];
    scanf("%[^\n]", rua);
    setrua(local, rua);
}
void modificarbairro(Endereco* local){
    char bairro[55];
    scanf("%[^\n]", bairro);
    setbairro(local, bairro);
}
void modificarnumero(Endereco* local){
    int numero;
    scanf("%d", numero);
    setnumero(local, numero);
}
void modificarcidade(Endereco* local){
    char cidade[55];
    scanf("%[^\n]", cidade);
    setcidade(local, cidade);
}
void modificarestado(Endereco* local){
    char estado[55];
    scanf("%[^\n]", estado);
    setestado(local, estado);
}
void modificarcep(Endereco* local){
    char cep[8];
    scanf("%[^\n]", cep);
    setcep(local, cep);
}

void Modificar(Endereco* local){
    int r;
    printf("\nDeseja mudar qual informação ?\n");
    printf("1 - Rua\n");
    printf("2 - Bairro\n");
    printf("3 - Numero\n");
    printf("4 - Cidade\n");
    printf("5 - Estado\n");
    printf("6 - CEP\n");
    printf("Escolha a opação: ");
    scanf("%d", &r);
    printf("\n");
    switch (r)
    {
    case 1:
        modificarrua(local);
        break;
    case 2:
        modificarbairro(local);
        break;
    case 3:
        modificarnumero(local);
        break;
    case 4:
        modificarcidade(local);
        break;
    case 5:
        modificarestado(local);
        break;
    case 6:
        modificarcep(local);
    default:
        printf("Valor invalido:");
        Modificar(local);
        break;
    }
}
void imprimirendereco(Endereco* local){
    printf("Rua: %s\nBairro: %s\nNumero: %d\nCidade: %s\nEstado: %s\nCEP: %s", getrua(local), getbairro(local), getnumero(local), getcidade(local), getestado(local), getcep(local));
}