
void binario(int n, char* binariou, int* i) {
    if (n > 0) {
        binario(n / 2, binariou, i);
        binariou[*i] = (n % 2) + '0'; 
        (*i)++;
    }
}

#include <stdio.h>

int main() {
    int num = 2;
    char bin[32];
    int i = 0;

    binario(num, bin, &i);
    bin[i] = '\0'; // Finaliza a string

    printf("Binário de %d = %s\n", num, bin);
    return 0;
}
