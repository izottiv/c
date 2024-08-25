int main()
{   int valor;
    int* v_ptr = &valor;
    *v_ptr = 10;
    *v_ptr = *v_ptr + 90;
    printf("Variavel v_ptr: O conteudo do endereco de memoria %p vale %d\n", v_ptr, *v_ptr);
 return 0;
}