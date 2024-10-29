#include <stdio.h>
void FalarODia(int n){
    int dia;
    if(n<=30){
        char mes[] = "Janeiro";
    }
    else if(n>30 && n<=60){
        char mes[] = "Fevereiro";
    }
    else if(n>60 && n<=90){
        char mes[] = "Março";
    }
    else if(n>90 && n<=120){
        char mes[] = "Abril";
    }
    else if(n>120 && n<=150){
        char mes[] = "Maio";
    }
    else if(n>150 && n<=180){
        char mes[] = "Junho";
    }
    else if(n>180 && n<=210){
        char mes[] = "Julho";
    }
    else if(n>210 && n<=240){
        char mes[] = "Agosto";
    }
    else if(n>240 && n<=270){
        char mes[] = "Setembro";
    }
    else if(n>240 && n<=300){
        char mes[] = "Outubro";
    }
    else if(n>300 && n<=330){
        char mes[] = "Novembro";
    }
    else if(n>330 && n<=360){
        char mes[] = "Dezembro";
    }

}
int main(){
    int n;
    scanf("%d", &n);
    return 0;
}