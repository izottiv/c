#include <stdio.h>
int main() {
 int idade;
 char nome[50];
 printf("Digite sua idade: ");
 scanf("%d", &idade);
 printf("Digite seu nome: ");
 scanf("%s", nome);
 printf("Seu nome eh %s e sua idade eh %d\n", nome, idade);
 return 0;
}