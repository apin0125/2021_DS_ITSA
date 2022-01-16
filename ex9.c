#include <stdio.h>
#include <math.h>
int main(){
    int x;
    unsigned long long int cost = 0;;
    scanf("%d", &x);
    for(int i = 1; i <= x; i++){
        if (i % 3 == 0)
            cost += i;
    }
    printf("%llu\n", cost);
    return 0;
}