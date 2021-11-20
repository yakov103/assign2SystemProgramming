#include <stdio.h>
#include "my_mat.h"

int main()
{
    char in = 1;
    while (in != 'D')
    {
        scanf(" %c", &in);
        switch (in)
        {
        case 'A':
            inputData();
            break;

        case 'B':
            checkEdges();
            break;

        case 'C':
            bestRoutes();
            break;

        case 'D':
            break;

        // command doesn't match any case constant A, B, C, D
        default:
            printf("Error! command isn't correct \n");
        }
    }
    return 0;
}