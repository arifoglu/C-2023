#include <stdio.h>

int main() {
    //
    int matrix[3][3] = { {1, 4, 2}, {3, 6, 8} ,{9, 7, 0 }} ;
    printf("%d\n",matrix[2][1]);
    
    // change value of matrix element 
    matrix[2][2] = 5;
    printf("%d\n",matrix[2][2]);

    // loop 
    int i, j;
    for (i = 0 ; i < 2 ; i++){
        for(j = 0; j < 3 ; j++){
            printf("%d\n",matrix[i][j]);
        }
    }

    return 0;
}