
#include <stdio.h>
int diferença_hora(int hora1, int minuto1, int hora2, int minuto2){
    int total_minuto1 = hora1 * 60 + minuto1;
    int total_minuto2 = hora2 * 60 + minuto2;
    int diferença = total_minuto2 - total_minuto1;
    if (diferença < 0) {
        diferença += 24 * 60;
    }
    return diferença;
    
}