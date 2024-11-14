#ifndef ENDERECO_H
#define ENDERECO_H

typedef struct
{
    char rua[55];
    int numero;
    char bairro[55];
    char cidade[55];
    char estado[55];
    char cep[8];
}Endereco;

void setrua(Endereco* local, char* rua);
void setbairro(Endereco* local, char* bairro);
void setnumeroendereco(Endereco* local, int numero);
void setcidade(Endereco* local, char* cidade);
void setestado(Endereco* local, char* estado);
void setcep(Endereco* local, char* cep);

char* getrua(Endereco* local);
char* getbairro(Endereco* local);
int getnumeroendereco(Endereco* local);
char* getcidade(Endereco* local);
char* getestado(Endereco* local);
char* getcep(Endereco* local);

void preencherendereco(Endereco* local);
void Inicializaendereco(Endereco* local, char* rua, char* bairro, int numero, char* cidade, char* estado, char* cep);
void Modificar(Endereco* local);
void modificarrua(Endereco* local);
void modificarbairro(Endereco* local);
void modificarnumero(Endereco* local);
void modificarcidade(Endereco* local);
void modificarestado(Endereco* local);
void modificarcep(Endereco* local);
void imprimirendereco(Endereco* local);

#endif

