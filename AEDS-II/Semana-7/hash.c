#include <sys/time.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define VAZIO  "!!!!!!!!!!"
#define RETIRADO  "**********"
#define M  6
#define N  11   /* Tamanho da chave */

typedef unsigned int TipoApontador;
typedef char TipoChave[N];
typedef unsigned TipoPesos[N];
typedef struct TipoItem {
  /* outros componentes */
  TipoChave Chave;
} TipoItem;
typedef unsigned int TipoIndice;
typedef TipoItem TipoDicionario[M];
TipoDicionario Tabela;
TipoPesos p;
TipoItem Elemento;
int j, i;

void GeraPesos(TipoPesos p)
{  /* -Gera valores randomicos entre 1 e 10.000- */
  int i; struct timeval semente;
  /* Utilizar o tempo como semente para a funcao srand() */
  gettimeofday(&semente,NULL); 
  srand((int)(semente.tv_sec + 1000000 * semente.tv_usec));
  for (i = 0; i < N; i++)
     p[i] = 1 + (int) (10000.0 * rand()/(RAND_MAX + 1.0));
}

TipoIndice h(TipoChave Chave, TipoPesos p)
{ int i; unsigned int Soma = 0; int comp = strlen(Chave);
  for (i = 0; i < comp; i++)
    Soma += (unsigned int)Chave[i] * p[i];
  return (Soma % M);
}

void Inicializa(TipoDicionario T)
{ int i;
 for (i = 0; i < M; i++) memcpy(T[i].Chave, VAZIO, N);
} 

TipoApontador Pesquisa(TipoChave Ch, TipoPesos p, TipoDicionario T)
{ unsigned int  i = 0; unsigned int  Inicial;
  Inicial = h(Ch, p);
  while (strcmp(T[(Inicial + i) % M].Chave,VAZIO) != 0 &&
         strcmp (T[(Inicial + i) % M].Chave, Ch) != 0 && i < M) 
    i++;
  if (strcmp( T[(Inicial + i) % M].Chave, Ch) == 0)  
  return ((Inicial + i) % M);
  else return M;  
} 

void Insere(TipoItem x, TipoPesos p, TipoDicionario T)
{ unsigned int i = 0; unsigned int Inicial;
  if (Pesquisa(x.Chave, p, T) < M) 
  { printf("Elemento ja esta presente\n"); return; }
  Inicial = h(x.Chave, p);
  while (strcmp(T[(Inicial + i) % M].Chave,VAZIO) != 0 &&
         strcmp(T[(Inicial + i) % M].Chave, RETIRADO) != 0 && i < M) 
     i++;
  if (i < M) 
  { strcpy(T[(Inicial + i) % M].Chave, x.Chave);  
  }
  else printf(" Tabela cheia\n");
} 


void Imprime(TipoDicionario tabela)
{  
  

  printf("- Segundo Carro: ");
  for (int i = 0; i < M; i++) { 
    if(strcmp(tabela[i].Chave, "!!!!!!!!!!") != 0){
      if (i%2 == 0){
    printf("%s - ", tabela[i].Chave);}}
  }
  printf("\n");
  printf("- Primeiro Carro: ");
  for (int i = 0; i < M; i++) { 
    if(strcmp(tabela[i].Chave, "!!!!!!!!!!") != 0){
      if (i%2 != 0){
    printf("%s - ", tabela[i].Chave);}}
  }
  printf("\n");
}  



int main()
{ 
  Inicializa(Tabela);
  GeraPesos(p); 
  int n;
  scanf("%d", &n);
  for(int i=0;i<n;i++){
    scanf("%s", Elemento.Chave);
    Insere(Elemento, p, Tabela);
  }
  Imprime(Tabela);
  while (1)
  {
    char busca[M];
    scanf("%s", busca);
    if (strcmp(busca, "0")==0){
      break;
    }
    else{
      strcpy(Elemento.Chave, busca);
      i = Pesquisa(Elemento.Chave, p, Tabela);
      if (i < M) printf("Aluno Confirmado \n");
      else printf("Aluno Não Confirmado \n");
    }
  }
  return 0;
}  