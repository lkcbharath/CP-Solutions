#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n;
    short flag = 0;
    long long int k;
    long long int joy, f, t, joyfinal;
    cin >> n;
    cin >> k;

    cin >> f;
    cin >> t;

    if ((t - k) > 0)
        joy = f - (t - k);
    else
        joy = f;

    joyfinal = joy;

    for (i = 0; i < (n - 1); ++i)
    {
        cin >> f;
        cin >> t;

        if ((t - k) > 0)
            joy = f - (t - k);
        else
            joy = f;

        if (joy > joyfinal)
            joyfinal = joy;
    }

    cout << joyfinal;
    return 0;
}