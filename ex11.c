#include <stdio.h>
#include <math.h>

int main(){
    int row, column;
    scanf("%d%d", &column, &row);
    int arr[row][column];
    for (int i = 0; i < column; i++){
        for (int j = 0; j < row; j++){
            scanf(" %d", &arr[j][i]);
        }
    }
    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            printf("%d", arr[i][j]);
            if (j != column - 1)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
