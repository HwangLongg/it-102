#include <stdio.h>
int main () {
    int n ;
    printf ("moi nhap vao hang va cot ");
    scanf ("%d",&n);
    int array[n][n];
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < n ; j++){
            printf ("%d ",array[i][j]);
        }
        printf ("\n");
    }
    
    return 0;
}