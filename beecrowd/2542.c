#include <stdio.h>
int main(){
    int n;
while (scanf("%d", &n)!= EOF){
    int m, l;
    scanf("%d %d", &m, &l);
    int cartasMarcus[m][n], cartasLeo[l][n];
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
        scanf("%d", &cartasMarcus[i][j]);
    }}
    for (int i=0;i<l;i++){
        for (int j=0;j<n;j++){
            scanf("%d", &cartasLeo[i][j]);
    }}
    int escolhaL, escolhaM, atributo, CartaEscolhidaL, CartaEscolhidaM;
    scanf("%d %d", &escolhaM, &escolhaL);
    scanf("%d", &atributo);
    CartaEscolhidaL = cartasLeo[escolhaL-1][atributo-1];
    CartaEscolhidaM = cartasMarcus[escolhaM-1][atributo-1];
    if (CartaEscolhidaL > CartaEscolhidaM){
        printf("Leonardo");
    }
    else if (CartaEscolhidaM > CartaEscolhidaL){
        printf("Marcos");
    }
    else{
        printf("Empate");
    }
    printf("\n");}

    return 0;
}