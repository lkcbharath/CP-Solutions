#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main()
{
    int i, n, p, q, x;
    cin >> n;
    int level[n + 1];
    for (i = 1; i <= n; i++)
        level[i] = 0;
    cin >> p;
    for (i = 0; i < p; i++)
    {
        cin >> x;
        level[x] = 1;
    }
    cin >> q;
    for (i = 0; i < q; i++)
    {
        cin >> x;
        level[x] = 1;
    }

    for (i = 1; i <= n; i++)
    {
        if (level[i] != 1)
        {
            cout << "Oh, my keyboard!";
            exit(0);
        }
        else
            continue;
    }
    cout << "I become the guy.";
    return 0;
}
