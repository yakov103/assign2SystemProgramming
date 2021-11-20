#include <stdio.h>
#include "my_mat.h"

int mat[size][size];

//1
void inputData()
{
    int input;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &input);
            mat[i][j] = input;
        }
    }
    ApplyFloydAlgo();
    }

//2
void checkEdges()
{
    int i, j;
    scanf("%d%d", &i, &j);
    if (mat[i][j] != 0)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
}

//3

void bestRoutes()
{
    int x, y;
    scanf("%d%d", &x, &y);
    if (mat[x][y] == 0)
    {
        printf("-1\n");
    }
    else
    {
        printf("%d\n", mat[x][y]);
    }
}

void ApplyFloydAlgo()
{
    for (int k = 0; k < size; k++)
    {
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                if (i == j)
                {
                    mat[i][i] = 0;
                }
                else if (i == k || j == k)
                {
                    mat[i][j] = mat[i][j];
                }
                else
                {
                    int kValue = mat[i][k] + mat[k][j];
                    if (mat[i][k] == 0 || mat[k][j] == 0)
                    {
                        mat[i][j] = 0;
                    }
                    mat[i][j] = getMinValue(mat[i][j], kValue);
                }
            }
        }
    }
}

int getMinValue(int leftValue, int rightValue)
{
    if (leftValue == 0)
    {
        return rightValue;
    }
    if (rightValue == 0)
    {
        return leftValue;
    }
    if (leftValue == 0 && rightValue == 0)
    {
        return 0;
    }
    if (leftValue < rightValue)
    {
        return leftValue;
    }
    else
    {
        return rightValue;
    }
}