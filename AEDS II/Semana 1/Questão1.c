#include <stdio.h>

typedef struct{
    int numero;
    char nome[50]; 
    int indiceOriginal;
}Livros;

void Insercao (Livros* v, int n ){
    int i,j;
    Livros aux;
    for (i = 1; i < n; i++)
    {
    aux = v[i];
    j = i - 1;
    while ( ( j >= 0 ) && ( aux.numero < v[j].numero ) )
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
    Livros preferidos[n];
    for(int i=0;i<n;i++){
        scanf("%d %s", &preferidos[i].numero, preferidos[i].nome);
        preferidos[i].indiceOriginal = i+1;
    }
    Insercao(preferidos, n);
    int busca, inicial = 0, meio=n/2, ultimo = n-1, encontrou=0;
    scanf("%d", &busca);
    while (encontrou==0 && ultimo>=inicial)
    {

        if(preferidos[meio].numero == busca){
            printf("Posição: %d, Livro: %s\n", preferidos[meio].indiceOriginal, preferidos[meio].nome);
            encontrou =1;
        }
        else if(preferidos[meio].numero> busca){
            ultimo = meio - 1;
        }
        else if(preferidos[meio].numero< busca){
            inicial = meio + 1;
        }
        meio = (inicial+ ultimo)/2;

    }
    

return 0;
}