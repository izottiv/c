/*Considere um programa que possua a seguinte função int somaptr(int a, int *pb); Essa 
função recebe um inteiro e um ponteiro e retorna a soma dos dois valores. Sendo int x e int *y
duas variáveis, diga para cada chamada abaixo da função está correta ou errada e justifique.
 int res = somaptr(x, y); certo
 int res = somaptr(y, x); errada, nesse caso o x precisa ser &x
 int res = somaptr(&x, &y); errada, pois precisa ser x e &y
 int res = somaptr(*y, &x); certo
 int res = somaptr(*y, y); certo, pois esta colocando o valor referente ao ponteiro y e o ponteiro y
*/ 
 