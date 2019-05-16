#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{

    int i, n, i1, j1, j, moves;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &n);
            if (n == 1)
            {
                i1 = i;
                j1 = j;
            }
        }
    }

A:
    moves = abs(i1 - 2) + abs(j1 - 2);
    cout << moves;
    return 0;
}