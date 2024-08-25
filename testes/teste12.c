int main(){
    int V[] = {101, 102, 103, 104, 105};
    printf("Valor de V[2]: %d\n", V[2]);
    printf("Valor de P[2]: %d\n", V[2]);
    printf("Valor de *(P+2): %d\n", *(V+2));
    int *ptr = V;
    for(int i = 0; i < 5; i++) {
    printf("(ptr+i):%d\n", *(ptr+i));
    }
    int *P = V;
    for(int i = 0; i < 5; i++) {
    printf("%d, ", *P);
    P++;
    }
    return 0;
}