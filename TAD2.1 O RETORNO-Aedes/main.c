#include <stdio.h>
#include "endereco.h"
int main()
{
    Endereco local;
    preencher_endereco(&local);
    imprimir_endereco(&local);
    return 0;
}
