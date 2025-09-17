#include <stdio.h>
int main(){
    double listax[14] = {-0.143,1.357,-1.643,0.557,-0.643,0.157,-1.143,0.857,1.457, 0.357, -0.343,-1.143,1.157,-0.543};
    double listay[14] = {-0.15,-0.65,1.05,-1.65,1.85,0.15,-1.15,-0.95,1.35,0.55,-0.35,2.35,-1.15,-1.25};
    double resultadosx[14], resultadosy[14], zxy[14], media;
    for(int i=0;i<14;i++){
        resultadosx[i]=listax[i]/0.98;
        resultadosy[i]=listay[i]/1.213;
        zxy[i] = resultadosx[i]*resultadosy[i];
        media += zxy[i];
        printf("resultado: %.3lf x %.3lf = %.3lf\n", resultadosx[i], resultadosy[i], zxy[i]);
    }printf("media: %lf", media/14);
    return 0;
}