#include <stdio.h>
char contar_string(char string[]){
    printf("%s", string);
    int tam = 0;
    while(string[tam]!='\0'){
        tam++;
    }
    return tam;
}
