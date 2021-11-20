#include <stdio.h>
#include "my_mat.h"

int mat[size][size];

void inputData()
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    ApplyFloydAlgo();
}

void checkEdges()
{
    int x, y;
    scanf("%d%d", &x, &y);
    if (mat[x][y] != 0)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
}

void bestRoutes()
{
    int i, j;
    scanf("%d%d", &i, &j);
    if (mat[i][j] == 0 || i == j)
    {
        printf("-1\n");
    }
    else
    {
        printf("%d\n", mat[i][j]);
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
                    int val = mat[i][k] + mat[k][j];
                    if (mat[i][k] == 0 || mat[k][j] == 0)
                    {
                        val = 0;
                    }
                    mat[i][j] = getMinValue(mat[i][j], val);
                }
            }
        }
    }
}

int getMinValue(int leftVal, int rightVal)
{
    if (leftVal == 0)
    {
        return rightVal;
    }
    if (rightVal == 0)
    {
        return leftVal;
    }
    if (leftVal == 0 && rightVal == 0)
    {
        return 0;
    }
    if (leftVal < rightVal)
    {
        return leftVal;
    }
    else
    {
        return rightVal;
    }
}