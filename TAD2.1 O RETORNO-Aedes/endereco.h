#ifndef ENDERECO_H_
#define ENDERECO_H_

//Struct
typedef struct
{
    char rua[255];
    int numerodacasa;
    char bairro[255];
    char cep[9];
    char cidade[255];
    char estado[3];
}Endereco;

//sets
void set_rua(Endereco* usuario, char* rua);
void set_numerodacasa(Endereco* usuario, int numero);
void set_bairro(Endereco* usuario, char* bairro);
void set_cep(Endereco* usuario, char* cep);
void set_cidade(Endereco* usuario, char* cidade);
void set_estado(Endereco* usuario, char* estado);

//gets
char* get_rua(Endereco* usuario);
int get_numerodacasa(Endereco* usuario);
char* get_bairro(Endereco* usuario);
char* get_cep(Endereco* usuario);
char* get_cidade(Endereco* usuario);
char* get_estado(Endereco* usuario);

//funções
void preencher_endereco(Endereco* usuario);
void inicializar_endereco(Endereco* usuario, char* rua, int numero, char* bairro,char* cep, char* cidade, char* estado);
void imprimir_endereco(Endereco* usuario);

#endif