#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{

    int i, n;
    scanf("%d", &n);
    int a;
    int max, min, posmax, posmin;
    max = 1;
    min = 100;
    posmax = 0;
    posmin = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a);
        if (max < a)
        {
            max = a;
            posmax = i;
        }

        if (min >= a)
        {
            min = a;
            posmin = i;
        }
    }
    int seconds = 0;
    seconds += posmax;
    if (posmax > posmin)
        posmin = posmin + 1;
    seconds += ((n - 1) - posmin);
    cout << seconds;
    return 0;
}