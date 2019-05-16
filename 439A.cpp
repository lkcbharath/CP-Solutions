#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, n, d, x;
    cin >> n;
    cin >> d;
    int devu = 0;
    for (i = 0; i < n; i++)
    {
        cin >> x;
        devu += x;
    }

    // cout << n+1 << ".\n";
    // cout << devu << ".\n";

    int churu = d - (devu);

    if (churu < ((n - 1) * 10))
    {
        cout << "-1";
        exit(0);
    }

    churu = churu / 5;
    cout << churu;

    return 0;
}
