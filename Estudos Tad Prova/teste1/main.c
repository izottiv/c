#include "Contabancaria.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
    Conta conta1;
    InicializarConta(&conta1, 918556, 300.00);
    printf("\nAntes da movimentação: \n");
    imprimirsaldo(&conta1);
    Deposito(&conta1, 50.00);
    Sacar(&conta1, 70.00);
    printf("\nDepois\n");
    imprimirsaldo(&conta1);


    return 0;
}