#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main()
{
    int i, j, n, m, a, b, min, rides, cost;
    cin >> n;
    cin >> m;
    cin >> a;
    cin >> b;

    (a * n) > (b * n) ? min = (a * n) : min = (b * n);

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++) //check %
        {
            rides = i + (m * j);
            cost = (a * i) + (b * j);

            if (rides >= n && min >= cost)
                min = cost;
        }
    }

    cout << min;
    return 0;
}
