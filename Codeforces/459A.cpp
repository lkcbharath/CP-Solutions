#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    int x[4], y[4];
    int i, x1, y1, z;
    int x3, x4, y3, y4; // last case
    for (i = 0; i < 2; i++)
        scanf("%d %d", &x[i], &y[i]);

    x1 = abs(x[1] - x[0]);
    y1 = abs(y[1] - y[0]);

    if (x1 == 0 && y1 == 0)
    {
        cout << "-1";
        exit(0);
    }

    else if (x1 == y1)
    {
        x3 = x[0];
        y3 = y[1];
        x4 = x[1];
        y4 = y[0];
        cout << x3 << " " << y3;
        cout << " ";
        cout << x4 << " " << y4;
    }

    else if (x[0] == x[1])
    {
        z = abs(y[1] - y[0]);

        if (abs(x[0] + z) <= 1000)
            x1 = x[0] + z;
        else
            x1 = x[0] - z;

        cout << x1 << " " << y[0];
        cout << " ";
        cout << x1 << " " << y[1];
    }

    else if (y[0] == y[1])
    {
        z = abs(x[1] - x[0]);

        if (abs(y[0] + z) <= 1000)
            y1 = y[0] + z;
        else
            y1 = y[0] - z;

        cout << x[0] << " " << y1;
        cout << " ";
        cout << x[1] << " " << y1;
    }

    else
    {
        cout << "-1";
        exit(0);
    }

    return 0;
}
