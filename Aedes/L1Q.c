#include <stdio.h>
void DiaEMes(int dia);
int main(){
    int dia;
    printf("Digite o número do dia: ");
    scanf("%d", &dia);
    DiaEMes(dia);
return 0;
}
void DiaEMes(int dia){
    char *meses[12] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    int mes = (dia-1)/30;
    int dias = dia - (mes*30);
    printf("%d de %s", dias , meses[mes]);
}