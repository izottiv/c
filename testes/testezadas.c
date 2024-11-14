#include <stdio.h>
#include <stdlib.h>
int main(){
double a;
 double *p;
 a = 3.14;
 printf("%lf\n", a);
 p = &a;
 *p = 2.718;
 printf("%lf\n", a);
 a = 5.0;
 printf("%lf\n", *p);
 p = NULL;
 p = (double *)malloc(sizeof(double));
 *p = 20.;
 printf("%lf\n", *p);
 printf("%lf\n", a);
 free(p);
 printf("%lf\n", *p);
    return 0;
}