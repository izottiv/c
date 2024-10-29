#include <stdio.h>
void soma(int a, int b){printf("%d",a+b);}
void subtracao(int a, int b){printf("%d",a-b);}
void multiplicacao(int a, int b){printf("%d",a*b);}
void divisao(int a, int b){printf("%d",a/b);}
int main(){
int escolha, a, b;
printf("Bem vindo(a) a calculadora, qual operação deseja fazer ?\n");
printf("1 - Soma\n");
printf("2 - Subtração\n");
printf("3 - Multiplicacao\n");
printf("4 - Divisão\n");
scanf("%d", &escolha);
printf("Digite o primeiro valor:");
scanf("%d", &a);
printf("Digite o segundo valor:");
scanf("%d", &b);
switch (escolha)
{
case 1:
    soma(a,b);
    break;
case 2:
    subtracao(a,b);
    break;
case 3:
    multiplicacao(a,b);
    break;
case 4:
    divisao(a,b);
    break;
default:
    break;
}
return 0;
}