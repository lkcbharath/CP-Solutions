#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, x, y;
    cin >> a >> b;
    int resa = 0;
    int resdraw = 0;
    int resb = 0;

    for (int i = 1; i <= 6; ++i)
    {

        x = abs(a - i);
        y = abs(b - i);

        if (x < y)
            ++resa;
        else if (x == y)
            ++resdraw;
        else
            ++resb;
    }

    cout << resa << " " << resdraw << " " << resb;

    return 0;
}