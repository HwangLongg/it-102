#include <stdio.h>
int main (){
    int tong = 0 ;
    int array[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    
    for ( int i = 0 ; i < 3 ; i++){
            printf ("%d\n", array[i][i]);
            tong += array[i][i];
        
        }
        printf ("%d la tong cua duong cheo chinh",tong);
    return 0;
}