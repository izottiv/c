#include<stdio.h>
float potencia(float a, int b){
    float res = 1;
    if(a<0){
        return 1;
    }
    else{
    for (int i=0;i<b;i++){
        res *= a;
    }
    return res;
    }
}
