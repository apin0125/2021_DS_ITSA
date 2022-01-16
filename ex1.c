#include <stdio.h>
#include <string.h>
void pr(int a, int b);
void head(int row, int b);
void tail(int row, int b);
void handt(int row, int b);
void htot(int row, int b);
char c[5][24];
int main(){
    memset(c, ' ', sizeof(c));
    int num;
    int arr[4]; 
    scanf("%d", &num);
    for (int i = 0; i < 4; i++){
        arr[3 - i] = num % 10;
        num /= 10 ;
    }
    for (int i = 0; i < 4; i++){
        pr(arr[i], i);
    }
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 23; j++){
            printf("%c", c[i][j]);
        }
            printf("\n");
    }
    return 0;
}
void pr(int a, int b){
    switch (a){
        case 0:
            htot(0, b);
            handt(1, b);
            handt(2, b);
            handt(3, b);
            htot(4, b);
            break;
        case 1:
            tail(0, b);
            tail(1, b);
            tail(2, b);
            tail(3, b);
            tail(4, b);
            break;
        case 2:
            htot(0, b);
            tail(1, b);
            htot(2, b);
            head(3, b);
            htot(4, b);
            break;
        case 3:
            htot(0, b);
            tail(1, b);
            htot(2, b);
            tail(3, b);
            htot(4, b);
            break;
        case 4:
            handt(0, b);
            handt(1, b);
            htot(2, b);
            tail(3, b);
            tail(4, b);
            break;
        case 5:
            htot(0, b);
            head(1, b);
            htot(2, b);
            tail(3, b);
            htot(4, b);
            break;
        case 6:
            htot(0, b);
            head(1, b);
            htot(2, b);
            handt(3, b);
            htot(4, b);
            break;
        case 7:
            htot(0, b);
            tail(1, b);
            tail(2, b);
            tail(3, b);
            tail(4, b);
            break;
        case 8:
            htot(0, b);
            handt(1, b);
            htot(2, b);
            handt(3, b);
            htot(4, b);
            break;
        case 9:
            htot(0, b);
            handt(1, b);
            htot(2, b);
            tail(3, b);
            tail(4, b);
            break;
    }
}
void head(int row, int b){
    c[row][6 * b] = '*';
}
void tail(int row, int b){
    c[row][6 * b + 4] = '*';
}
void handt(int row, int b){
    c[row][6 * b] = '*';
    c[row][6 * b + 4] = '*';
}
void htot(int row, int b){
    for (int i = 0; i < 5; i++){
        c[row][6 * b + i] = '*';
    }
}