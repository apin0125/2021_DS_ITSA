#include <stdio.h>
#include <math.h>
int gcd(int a, int b);
int main(){
    int x, y;
    scanf("%d%d", &x, &y);
    printf("%d\n",gcd(x, y));
    return 0;
}
int gcd(int a, int b){
    if (a % b == 0)
        return b;
    gcd(b, a % b);
}