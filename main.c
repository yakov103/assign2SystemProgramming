#include <stdio.h>
#include "my_mat.h"

int main()
{
    char input = 1;
    while (input != 'D')
    {
        scanf(" %c", &input);
        switch (input)
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
        default:
            break;
        };
    };
    return 0;
}
