#include <stdio.h>
#include <math.h>
int main(){
    int x;
    scanf("%d", &x);
    if (x < 3)
        printf("Winter\n");
    else if (x < 6)
        printf("Spring\n");
    else if (x < 9)
        printf("Summer\n");
    else if (x < 12)
        printf("Autumn\n");
    else
        printf("Winter\n");
    return 0;
}
