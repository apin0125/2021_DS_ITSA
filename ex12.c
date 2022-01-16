#include <stdio.h>
#include <math.h>
int fun(int n);
int main(){
    int num;
    scanf("%d", &num);
    printf("%d\n", fun(num));
    return 0;
}
int fun(int n){
    if (n == 0 || n == 1)
        return n + 1;
    return fun(n - 1) + fun(n / 2);
}