#include <stdio.h>

int main() {

    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int tong = 0;

    printf("Các phần tử trên đường chéo phụ: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", matrix[i][3-1-i]);
        tong += matrix[i][3-1-i];
    }
    
    printf("\nTổng các phần tử trên đường chéo phụ: %d\n", tong);

    return 0;
}
