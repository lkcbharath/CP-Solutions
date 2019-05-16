#include <bits/stdc++.h>
using namespace std;

int main()
{
    uint64_t l, r;
    cin >> l;
    cin >> r;

    if ((r - l) <= 1)
    {
        cout << "-1";
        return 0;
    }

    //e,e o,o e,o o,e

    if (r % 2 == 0 && l % 2 == 0) //also fixes the r-l = 2 case
        cout << l << " " << (l + 1) << " " << (l + 2);

    if (r % 2 == 1 && l % 2 == 1)
    {
        if (r - l == 2)
            cout << "-1";
        else
            cout << (l + 1) << " " << (l + 2) << " " << (l + 3);
    }

    if (r % 2 == 1 && l % 2 == 0)
    {
        cout << l << " " << (l + 1) << " " << (l + 2);
    }

    if (r % 2 == 0 && l % 2 == 1)
    {
        cout << (l + 1) << " " << (l + 2) << " " << (l + 3);
    }

    return 0;
}