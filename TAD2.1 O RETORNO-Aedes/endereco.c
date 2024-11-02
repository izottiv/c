#include <stdio.h>
#include <string.h>
#include "endereco.h"

//sets
void set_rua(Endereco* usuario, char* rua){
    strcpy(usuario->rua, rua);
}
void set_numerodacasa(Endereco* usuario, int numero){
    usuario->numerodacasa = numero;
}
void set_bairro(Endereco* usuario, char* bairro){
    strcpy(usuario->bairro, bairro);
}
void set_cep(Endereco* usuario, char* cep){
    strcpy(usuario->cep, cep);
}
void set_cidade(Endereco* usuario, char* cidade){
    strcpy(usuario->cidade, cidade);
}
void set_estado(Endereco* usuario, char* estado){
    strcpy(usuario->estado, estado);
}


//gets
char* get_rua(Endereco* usuario){
    return (usuario->rua);
}
int get_numerodacasa(Endereco* usuario){
    return (usuario->numerodacasa);
}
char* get_bairro(Endereco* usuario){
    return (usuario->bairro);
}
char* get_cep(Endereco* usuario){
    return (usuario->cep);
}
char* get_cidade(Endereco* usuario){
    return (usuario->cidade);
}
char* get_estado(Endereco* usuario){
    return (usuario->estado);
}


//funções
void preencher_endereco(Endereco* usuario){
    int numero;
    char rua[255], bairro[255], cidade[255], estado[3], cep[9];
    printf("Digite suas informacoes de endereco:\n");
    printf("Digite a sua rua: ");
    scanf("%[^\n]", rua);getc(stdin);
    printf("Digite o numero da sua casa: ");
    scanf("%d", &numero);getc(stdin);
    printf("Digite o seu bairro: ");
    scanf("%[^\n]", bairro);getc(stdin);
    printf("Digite o seu cep: ");
    scanf("%s", cep);getc(stdin);
    printf("Digite a sua cidade: ");
    scanf("%[^\n]", cidade);getc(stdin);
    printf("Digite o seu estado(apenas a sigla ex: MG): ");
    scanf("%s", estado);

    inicializar_endereco(usuario, rua, numero, bairro, cep, cidade, estado);
}
void inicializar_endereco(Endereco* usuario, char* rua, int numero, char* bairro, char* cep, char* cidade, char* estado){
    set_rua(usuario, rua);
    set_numerodacasa(usuario, numero);
    set_bairro(usuario, bairro);
    set_cep(usuario, cep);
    set_cidade(usuario, cidade);
    set_estado(usuario, estado);

}
void imprimir_endereco(Endereco* usuario){
    printf("Rua %s N %d, %s\nCEP: %s\n", get_rua(usuario), get_numerodacasa(usuario), get_bairro(usuario), get_cep(usuario));
    printf("Cidade: %s\nEstado: %s", get_cidade(usuario), get_estado(usuario));
}