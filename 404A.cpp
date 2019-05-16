#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j;
    cin >> n;
    char a[n][n];
    char x, s;

    for (i = 0; i < n; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            cin >> a[i][j];
        }
    }

    x = a[0][0];
    s = a[0][1];

    if (x == s)
    {
        cout << "NO";
        return 0;
    }

    for (i = 0; i <= ((n / 2) + 1); ++i)
    {
        if (a[i][i] == x && x == a[n - i - 1][n - i - 1] && x == a[i][n - i - 1] && x == a[n - i - 1][i])
            continue;
        else
        {
            cout << "NO";
            return 0;
        }
    }

    for (i = 0; i < n; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            if (i != j && i != (n - j - 1) && j != (n - i - 1) && (n - i - 1) != (n - j - 1))
            {
                if (a[i][j] == s)
                    continue;
                else
                {
                    cout << "NO";
                    return 0;
                }
            }
        }
    }

    cout << "YES";
    return 0;
}