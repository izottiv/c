#include <stdio.h>
int main(){
    int m[4][5];
     for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            m[i][j] = i;
        }}
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", m[i][j]);
        }
    printf("\n");    
    }
    
    return 0;
}
