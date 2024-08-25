#include<stdio.h>
int main(){
    int n, num = 1, num2 = 4;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        printf("%d ", num);
        printf("%d ", num2);
        printf("%d ", num2);
        num++;
        num2++;
    }
    return 0;
}