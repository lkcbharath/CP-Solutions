#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j, diff;
    int min, max;
    cin >> n;
    int a[n];
    for (i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    min = a[n - 1] - a[0];

    for (i = 1; i <= (n - 2); ++i)
    {
        max = 0;

        for (j = 0; j <= (n - 2); ++j)
        {
            if ((j + 1) == i)
                diff = a[j + 2] - a[j];

            else if (j == i)
                continue;
            else
                diff = a[j + 1] - a[j];

            if (max < diff)
                max = diff;
        }

        if (min > max)
            min = max;
    }

    cout << min;

    return 0;
}