#include <stdio.h>
#include <math.h>

int main(){
    int x, y;
    scanf("%d%d", &x, &y);
        if (x < -100 || y < -100 || x > 100 || y > 100 || x * x + y * y > 10000){
            printf("outside\n");
        }
        else    
            printf("inside\n");
    return 0;
}