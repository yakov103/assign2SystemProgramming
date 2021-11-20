#include <stdio.h>
#include "my_mat.h"

//1
int inputData(int mat[size][size])
{
    int input;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf(" %d", &input);
            mat[i][j] = input;
        }
    }
    ApplyFloydAlgo(mat);
    return 0;
}

//2
int checkEdges(int mat[size][size])
{
    int i, j;
    scanf("%d %d", &i, &j);
    if (mat[i][j] != 0)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
    return 0;
}

//3

int bestRoutes(int mat[size][size])
{
    int x, y;
    scanf("%d %d", &x, &y);
    if (mat[x][y] == 0)
    {
        printf("-1\n");
    }
    else
    {
        printf("%d\n", mat[x][y]);
    }
    return 0;
}

int ApplyFloydAlgo(int mat[size][size])
{
        for (int k = 0; k < size; k++) {
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                int kValue = mat[i][k] + mat[k][j];
                if (kValue < mat[i][j]){
                    mat [i][j]= kValue;
                }
            }
        }
    }
    return 0;
}
