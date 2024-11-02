#include <stdio.h>
#include "endereco.h"
#include "cliente.h"
#include "conta.h"
int main()
{
    Conta jorge;
    preencher_conta(&jorge);
    imprimir_conta(&jorge);
    return 0;
}
