#ifndef SEMANA_H
#define SEMANA_H

typedef enum{
    Paus,
    Ouros,
    Copas,
    Espadas,
}Nipe;

typedef struct 
{
    int numero;
    Nipe nipee;
}Carta;

void insert(Carta** Vetor, int tam);

#endif