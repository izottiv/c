#include <stdio.h>
#include <math.h>
int main(){
    double n = 3.14159, r;
    scanf("%lf", &r);
    double area = n*(pow(r,2));
    printf("%.2lf", area);
    return 0;
}