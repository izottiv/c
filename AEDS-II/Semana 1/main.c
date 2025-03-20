#include <stdio.h>

typedef struct{
    int ordem;
    char nome[100];
}livros;

void Ordena(int Esq, int Dir, livros *A){
    int i,j;
    Particao(Esq, Dir, &i, &j, A);
    if (Esq < j) Ordena(Esq, j, A);
    if (i < Dir) Ordena(i, Dir, A);
    }
    void QuickSort(livros *A, int n)
    {
    Ordena(0, n-1, A);
    }
    void Particao(int Esq, int Dir,
        int *i, int *j, livros *A){
        livros pivo, aux;
        *i = Esq; *j = Dir;
        pivo = A[(*i + *j)/2]; 
        do
        {
        while (pivo.ordem > A[*i].ordem) (*i)++;
        while (pivo.ordem < A[*j].ordem) (*j)--;
        if (*i <= *j)
        {
        aux = A[*i]; A[*i] = A[*j]; A[*j] = aux;
        (*i)++; (*j)--;
        }
        } while (*i <= *j);
        }


int main(){
    int n;
    printf("Nmr livros: ");
    scanf("%d", &n);
    livros preferidos[n];
    for(int i=0;i<n;i++){
        printf("Numero e nome: ");
        scanf("%d %s", &preferidos[i].ordem, preferidos[i].nome);
    }


return 0;
}