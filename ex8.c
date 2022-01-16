#include <stdio.h>  
#include <math.h>  
int main(){  
    int x;  
    int i;  
    int flag = 0;  
    while (scanf("%d", &x) != EOF){  
        flag = 0;  
        if (x == 1)  
            flag = 1;  
        i = 2;  
        while (i * i <= x){  
            if (x % i == 0){  
                flag = 1;  
                break;  
            }  
            i++;  
        }  
        if (flag == 1)  
            printf("NO\n");  
        else   
            printf("YES\n");  
    }  
    return 0;  
}  