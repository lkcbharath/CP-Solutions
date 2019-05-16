#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k, i, j, count, x, y;
    cin >> n;
    cin >> m;
    cin >> k;

    long int players[m + 1]; // m index is fedora
    int friends = 0;

    for (i = 0; i <= m; ++i)
    {
        cin >> players[i];
    }

    for (i = 0; i < m; ++i)
    {
        count = 0;

        for (j = 0; j < n; ++j)
        {

            x = (players[i] & (1 << j));
            y = (players[m] & (1 << j)); //fedora

            if (x != y)
                ++count;
        }
        if (count <= k) //differ by atmost k bits
            ++friends;  //friendship goals
    }

    cout << friends;

    //fedor
    return 0;
}