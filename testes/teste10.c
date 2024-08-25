#include<stdio.h>
int main(){   
    int valor;
    int* v_ptr = &valor;
    *v_ptr = 1234;
    if(&valor == v_ptr){
    printf("TRUE Os enderecos &valor e v_ptr sao iguais\n");}
    if( &v_ptr == &valor){
    printf("TRUE Comparando endereco do ponteiro com endereco do valor\n", &v_ptr );
    }
    else{
    printf("FALSE Endereco do ponteiro: %p Endereco do ponteiro: %p \n", &v_ptr, &valor);}
    if( &v_ptr == v_ptr){
    printf("TRUE O endereco do ponteiro tem o valor &p\n", &v_ptr ); }
    else{
    printf("FALSE Endereco do ponteiro: %p ponteiro: %p \n", &v_ptr, v_ptr); }
    return 0;
}