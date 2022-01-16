#include <stdio.h>
#include <math.h>
void dtob(int d);
int main(){
    int x;
    int bin[8];
    scanf("%d", &x);
    if (x < 0)
        x += 256;
    for (int i = 7; i >= 0; i--){
        bin[i] = x % 2;
        x /= 2;
    }
    for (int i = 0; i < 8; i++){
        printf("%d", bin[i]);
    }
    printf("\n");
    return 0;
}
