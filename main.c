#include <stdio.h>
#include "my_mat.h"


int main() {


    int mat[size][size];
    int flag= False;
    char input;
    while (!flag){
        scanf("%c", &input);
        switch (input){
            case 'A':
                inputData(mat);
                break;
            case 'B':
                checkEdges(mat);
                break;

            case 'C':
                bestRoutes(mat);
                break;

            case 'D':
                flag = True;
                break;
            default:
                break;


        }

    }

    inputData(mat);
    for (int i = 0; i <size ; ++i) {
        printf("\n");
        for (int j = 0; j < size; ++j) {
            printf("%d ",mat[i][j]);
        }
    }


    return 0;
}
