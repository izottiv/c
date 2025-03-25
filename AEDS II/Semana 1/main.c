#include <stdio.h>
#include <string.h>

typedef struct{
    char mod[50];
    int indiceOriginal;
}Pacote;

void Insercao (Pacote* v, int n ){
    int i,j;
    Pacote aux;
    for (i = 1; i < n; i++)
    {
    aux = v[i]; 
    j = i - 1;
    while ( ( j >= 0 ) && (strcmp(aux.mod, v[j].mod )<0))
    {
    v[j + 1] = v[j];
    j--;
    }
    v[j + 1] = aux;
    }
    }

int main(){
    int n;
    scanf("%d", &n);
    Pacote modpack[n];
    for(int i=0;i<n;i++){
        scanf("%s", modpack[i].mod);
        modpack[i].indiceOriginal = i+1;
    }
    Insercao(modpack, n);
    char busca[50] ;
    scanf("%s", busca);
    int inicial=0, meio=n/2, final=n-1, encontrou=0;
    while (encontrou ==0 && inicial<=final)
    {
        if(strcmp(modpack[meio].mod, busca)==0){
            printf("Posição: %d", modpack[meio].indiceOriginal);
            encontrou =1;
        }
        else if(strcmp(modpack[meio].mod, busca)>0){
            final = meio-1;
        }
        else if(strcmp(modpack[meio].mod, busca)<0){
            inicial = meio+1;
        }
        meio = (inicial+final)/2;
    }
    
return 0;
}