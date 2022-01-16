#include <stdio.h>
#include <math.h>

int main(){
    int x, y, x1, y1;
    int t = 0;
    int cost = 0;
    while (scanf("%d%d%d%d", &x, &y, &x1, &y1) != EOF){
        t += 60 * (x1 - x) + y1 - y;
        t /= 30;
        if (t <= 4){
            cost = t * 30;
        }
        else if (t <= 8){
            cost = 120 + (t - 4) * 40;
        }
        else
            cost = 280 + (t - 8) * 60;
        printf("%d\n", cost);
    }
    return 0;
}