#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int Faltando[n-1]; 
    int Sequencia[n];
    for(int i=0;i<n-1;i++){
        scanf("%d", &Faltando[i]);
    }
    
    for(int i=0;i<n-2;i++){
        for(int j=0;j<n-2;j++){
            if(Faltando[j]>Faltando[j+1]){
                int aux = Faltando[j+1];
                Faltando[j+1] = Faltando[j];
                Faltando[j] = aux;
            }
        }
    }
    for (int i= 0; i<n; i++){
        Sequencia[i] = i+1;
    }
    for(int a=0;a<n;a++){
        if(Sequencia[a]!=Faltando[a]){
            printf("%d\n", Sequencia[a]);
            
            break;}
    }
    return 0;
}
