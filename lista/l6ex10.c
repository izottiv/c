#include <stdio.h>
void crescente(int a, int b, int c){
    int temp;
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    printf("%d %d %d\n", a, b, c);
}