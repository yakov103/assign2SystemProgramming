#include <stdio.h>
#include "my_mat.h"


//1
int inputData (int mat[size][size]){
    int input;
    for (int i = 0 ; i < size ; i++){
        for (int j = 0 ; j <size ; j++ ){
         scanf("%d", &input);
         mat[i][j] = input;
        }
    }
    return 0 ;
}

//2
void checkEdges(int mat[size][size]){
 int i, j ;
    scanf("%d %d",&i,&j);
    if (mat[i][j] == False){
        printf("False\n");
    }
    else {
        printf("True\n");
    }
}

//3

int bestRoutes (int mat[size][size]){
    int bestMat [size][size];
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            bestMat[i][j] = mat[i][j];
        }
    }
    for (int k = 0; k < size; k++) {
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                int kValue = bestMat[i][k] + bestMat[k][j];
                if (kValue < bestMat[i][j]){
                    bestMat [i][j]= kValue;
                }
            }
        }

    }
    int x,y;
    scanf("%d %d",&x,&y);
    if (bestMat[x][y] == False){
        printf("-1\n");
    }
    else{
        printf("%d\n",bestMat[x][y]); 
    }
}








