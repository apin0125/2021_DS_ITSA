#include <stdio.h>
#include <math.h>
int main(){
    int x;
    int a, b, c, d;
    int e, f;
    char o;
    scanf("%d", &x);
    for (int i = 0; i < x; i++){
        
        scanf(" %c %d %d %d %d", &o, &a, &b, &c, &d);
        switch (o){
            case '+':
                e = a + c;
                f = b + d;
                break;
            case '-':
                e = a - c;
                f = b - d;
                break;
            case '*':
                e = a * c - b * d;
                f = a * d + b * c;
                break;
            case '/':
                e = (c * a + b * d) / (c * c + d * d);
                f = (b * c - a * d) / (c * c + d * d);
                break;
        }
        printf("%d %d\n", e, f);
    }
    return 0;
}
