#include <bits/stdc++.h>
using namespace std;

int smallest(int x, int y, int z)
{
    int c = 0;
    while (x && y && z)
    {
        x--;
        y--;
        z--;
        c++;
    }
    return c;
}

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int quant = ((k * l) / nl);
    int slice = (c * d);
    int salt = ((p) / np);

    int result = smallest(quant, slice, salt);
    result = result / n;

    cout << result;

    return 0;
}